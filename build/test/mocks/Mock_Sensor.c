/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_Sensor.h"

static const char* CMockString_Sensor_get = "Sensor_get";
static const char* CMockString_me = "me";

typedef struct _CMOCK_Sensor_get_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  int CallOrder;
  Sensor* Expected_me;
  int IgnoreArg_me;

} CMOCK_Sensor_get_CALL_INSTANCE;

static struct Mock_SensorInstance
{
  int Sensor_get_IgnoreBool;
  int Sensor_get_FinalReturn;
  CMOCK_Sensor_get_CALLBACK Sensor_get_CallbackFunctionPointer;
  int Sensor_get_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Sensor_get_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void Mock_Sensor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Sensor_get_IgnoreBool)
    Mock.Sensor_get_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Sensor_get);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Sensor_get_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.Sensor_get_CallbackFunctionPointer != NULL)
    Mock.Sensor_get_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_Sensor_Init(void)
{
  Mock_Sensor_Destroy();
}

void Mock_Sensor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.Sensor_get_CallbackFunctionPointer = NULL;
  Mock.Sensor_get_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

int Sensor_get(Sensor* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_Sensor_get);
  CMOCK_Sensor_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sensor_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Sensor_get_CallInstance);
  Mock.Sensor_get_CallInstance = CMock_Guts_MemNext(Mock.Sensor_get_CallInstance);
  if (Mock.Sensor_get_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Sensor_get_FinalReturn;
    Mock.Sensor_get_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->IgnoreArg_me)
  {
    UNITY_SET_DETAILS(CMockString_Sensor_get,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_me, me, cmock_line, CMockStringMismatch);
  }
  if (Mock.Sensor_get_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.Sensor_get_CallbackFunctionPointer(me, Mock.Sensor_get_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Sensor_get(CMOCK_Sensor_get_CALL_INSTANCE* cmock_call_instance, Sensor* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->IgnoreArg_me = 0;
}

void Sensor_get_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Sensor_get_CALL_INSTANCE));
  CMOCK_Sensor_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sensor_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Sensor_get_CallInstance = CMock_Guts_MemChain(Mock.Sensor_get_CallInstance, cmock_guts_index);
  Mock.Sensor_get_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Sensor_get_IgnoreBool = (int)1;
}

void Sensor_get_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Sensor* const me, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Sensor_get_CALL_INSTANCE));
  CMOCK_Sensor_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sensor_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Sensor_get_CallInstance = CMock_Guts_MemChain(Mock.Sensor_get_CallInstance, cmock_guts_index);
  Mock.Sensor_get_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Sensor_get(cmock_call_instance, me);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void Sensor_get_StubWithCallback(CMOCK_Sensor_get_CALLBACK Callback)
{
  Mock.Sensor_get_CallbackFunctionPointer = Callback;
}

void Sensor_get_CMockIgnoreArg_me(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Sensor_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sensor_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Sensor_get_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_me = 1;
}

