#include "Mock_Timer.h"
#include "Mock_Sensor.h"
#include "Mock_PWMInyector.h"
#include "Mock_ThrottleSensor.h"
#include "Mock_RPMSensor.h"
#include "Mock_TempSensor.h"
#include "Mock_RPMControl.h"
#include "InyectorControlAct.h"
#include "unity.h"












static Event event;









void

setUp(void)

{

    Mock_RPMControl_Init();

    Mock_TempSensor_Init();

    Mock_RPMSensor_Init();

    Mock_ThrottleSensor_Init();

    Mock_PWMInyector_Init();

    Mock_Sensor_Init();

    Mock_Timer_Init();

}



void

tearDown(void)

{

    Mock_RPMControl_Verify();

    Mock_TempSensor_Verify();

    Mock_RPMSensor_Verify();

    Mock_ThrottleSensor_Verify();

    Mock_PWMInyector_Verify();

    Mock_Sensor_Verify();

    Mock_Timer_Verify();

    Mock_RPMControl_Destroy();

    Mock_TempSensor_Destroy();

    Mock_RPMSensor_Destroy();

    Mock_ThrottleSensor_Destroy();

    Mock_PWMInyector_Destroy();

    Mock_Sensor_Destroy();

    Mock_Timer_Destroy();

}



void

test_SetInitialValuesAfterInit(void)

{

    TempSensor *temp = (TempSensor *)0xdeadbeef;

    RPMSensor *rpm = (RPMSensor *)0xdeadbeef;

    ThrottleSensor *throttle = (ThrottleSensor *)0xdeadbeef;

    Timer *tmr = (Timer *)0xdeadbeef;



    TempSensor_init_CMockExpectAndReturn(106, temp);

    RPMSensor_init_CMockExpectAndReturn(107, rpm);

    ThrottleSensor_init_CMockExpectAndReturn(108, throttle);

    RPMControl_init_CMockExpect(

 110

    , 20, 30, 2000, 20, 20)

                                                      ;

    PWMInyector_init_CMockExpect(111);

    Timer_init_CMockExpectAndReturn(112, 2000, 0, evStartTimeout, tmr);



    InyectorControlAct_init();

}



void

test_SetDutyTo50ForAWhileOnStart(void)

{

    Timer *tmr = (Timer *)0xdeadbeef;

    event.signal = evStart;



    Timer_start_CMockExpect(123, tmr);

    Timer_start_CMockIgnoreArg_me(124);

    PWMInyector_setDuty_CMockExpect(125, 50);



    InyectorControlAct_starting(&event);

}



void

test_CheckPressedThrottle(void)

{

    bool result;

    Sensor *sensor = (Sensor *)0xdeadbeef;



    event.signal = evTick;



    Sensor_get_CMockExpectAndReturn(138, sensor, 30 - 1);

    Sensor_get_CMockIgnoreArg_me(139);



    result = InyectorControlAct_isPressedThrottle(&event);

    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)(142), UNITY_DISPLAY_STYLE_INT);



    Sensor_get_CMockExpectAndReturn(144, sensor, 30);

    Sensor_get_CMockIgnoreArg_me(145);



    result = InyectorControlAct_isPressedThrottle(&event);

    UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)(148), UNITY_DISPLAY_STYLE_INT);



    Sensor_get_CMockExpectAndReturn(150, sensor, 30 + 1);

    Sensor_get_CMockIgnoreArg_me(151);



    result = InyectorControlAct_isPressedThrottle(&event);

    UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)(154), UNITY_DISPLAY_STYLE_INT);

}



void

test_SetDutyLinearlyWithThrottle(void)

{

    Sensor *sensor = (Sensor *)0xdeadbeef;

    int throttleValues[4] = {30 + 5,

                             30 + 10,

                             30 + 20,

                             30 + 30};

    int *pThrottleValue;



    event.signal = evTick;



    for (pThrottleValue = throttleValues;

         pThrottleValue < throttleValues + 4;

         ++pThrottleValue)

    {

        Sensor_get_CMockExpectAndReturn(173, sensor, *pThrottleValue);

        Sensor_get_CMockIgnoreArg_me(174);



        Sensor_get_CMockExpectAndReturn(176, sensor, 90);

        Sensor_get_CMockIgnoreArg_me(177);

        Sensor_get_CMockExpectAndReturn(178, sensor, 0);

        Sensor_get_CMockIgnoreArg_me(179);

        PWMInyector_setDuty_CMockExpect(180, *pThrottleValue);



        InyectorControlAct_isPressedThrottle(&event);

        InyectorControlAct_onNormal(&event);

    }

}



void

test_IncrementDutyForColdEngine(void)

{

    Sensor *sensor = (Sensor *)0xdeadbeef;

    unsigned char duty = 30 + 20;



    event.signal = evTick;



    Sensor_get_CMockExpectAndReturn(195, sensor, duty);

    Sensor_get_CMockIgnoreArg_me(196);



    Sensor_get_CMockExpectAndReturn(198, sensor, 70 - 1);

    Sensor_get_CMockIgnoreArg_me(199);

    Sensor_get_CMockExpectAndReturn(200, sensor, 0);

    Sensor_get_CMockIgnoreArg_me(201);

    PWMInyector_setDuty_CMockExpect(202, duty + 10);



    InyectorControlAct_isPressedThrottle(&event);

    InyectorControlAct_onNormal(&event);

}
