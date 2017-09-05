#include "Mock_InyectorControlAct.h"
#include "InyectorControl.h"
#include "unity.h"












static int state, expectNextState;

static Event event;







static void

setProfile(int currState, int nextState, int signal)

{

    InyectorControl_setState(currState);

    event.signal = signal;

    expectNextState = nextState;

}





void

setUp(void)

{

    Mock_InyectorControlAct_Init();

}



void

tearDown(void)

{

    Mock_InyectorControlAct_Verify();

    Mock_InyectorControlAct_Destroy();

}



void

test_DefaultStateAfterInit(void)

{

    InyectorControlAct_init_CMockExpect(86);

    expectNextState = InyectorControl_init();

    UnityAssertEqualNumber((_U_SINT)((off)), (_U_SINT)((expectNextState)), (((void *)0)), (_U_UINT)(88), UNITY_DISPLAY_STYLE_INT);

}



void

test_AnUnhandledEventDoesNotChangeState(void)

{

    setProfile(off, (-1), evStartTimeout);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(96), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((off)), (_U_SINT)((InyectorControl_getState())), (((void *)0)), (_U_UINT)(97), UNITY_DISPLAY_STYLE_INT);

}



void

test_StateTransitionTableForOff(void)

{

    setProfile(off, starting, evStart);

    InyectorControlAct_starting_CMockExpect(104, &event);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(106), UNITY_DISPLAY_STYLE_INT);

}



void

test_StateTransitionTableForStarting(void)

{

    setProfile(starting, idleSpeed, evStartTimeout);





    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(116), UNITY_DISPLAY_STYLE_INT);

}



void

test_StateTransitionTableForIdleSpeed(void)

{

    setProfile(idleSpeed, idleSpeed, evTick);

    InyectorControlAct_isReleasedThrottle_CMockExpectAndReturn(123, &event, 1);

    InyectorControlAct_onIdleSpeed_CMockExpect(124, &event);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(126), UNITY_DISPLAY_STYLE_INT);



    setProfile(idleSpeed, normal, evTick);

    InyectorControlAct_isReleasedThrottle_CMockExpectAndReturn(129, &event, 0);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(131), UNITY_DISPLAY_STYLE_INT);

}



void

test_StateTransitionTableForNormal(void)

{

    setProfile(normal, normal, evTick);

    InyectorControlAct_isPressedThrottle_CMockExpectAndReturn(138, &event, 1);

    InyectorControlAct_onNormal_CMockExpect(139, &event);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(141), UNITY_DISPLAY_STYLE_INT);



    setProfile(normal, idleSpeed, evTick);

    InyectorControlAct_isPressedThrottle_CMockExpectAndReturn(144, &event, 0);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(146), UNITY_DISPLAY_STYLE_INT);

}



void

test_StateTransitionTableForNormal_UnhandledEvents(void)

{

    setProfile(normal, (-1), evStart);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(154), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((normal)), (_U_SINT)((InyectorControl_getState())), (((void *)0)), (_U_UINT)(155), UNITY_DISPLAY_STYLE_INT);



    setProfile(normal, (-1), evStartTimeout);

    state = InyectorControl_dispatch(&event);

    UnityAssertEqualNumber((_U_SINT)((expectNextState)), (_U_SINT)((state)), (((void *)0)), (_U_UINT)(159), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((_U_SINT)((normal)), (_U_SINT)((InyectorControl_getState())), (((void *)0)), (_U_UINT)(160), UNITY_DISPLAY_STYLE_INT);

}
