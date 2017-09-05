/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_Timer.h"

static const char* CMockString_Timer_init = "Timer_init";
static const char* CMockString_Timer_start = "Timer_start";
static const char* CMockString_count = "count";
static const char* CMockString_eventSignal = "eventSignal";
static const char* CMockString_me = "me";
static const char* CMockString_period = "period";

typedef struct _CMOCK_Timer_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Timer* ReturnVal;
  int CallOrder;
  int Expected_count;
  int Expected_period;
  int Expected_eventSignal;
  int IgnoreArg_count;
  int IgnoreArg_period;
  int IgnoreArg_eventSignal;

} CMOCK_Timer_init_CALL_INSTANCE;

typedef struct _CMOCK_Timer_start_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  Timer* Expected_me;
  int IgnoreArg_me;

} CMOCK_Timer_start_CALL_INSTANCE;

static struct Mock_TimerInstance
{
  int Timer_init_IgnoreBool;
  Timer* Timer_init_FinalReturn;
  CMOCK_Timer_init_CALLBACK Timer_init_CallbackFunctionPointer;
  int Timer_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Timer_init_CallInstance;
  int Timer_start_IgnoreBool;
  CMOCK_Timer_start_CALLBACK Timer_start_CallbackFunctionPointer;
  int Timer_start_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE Timer_start_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void Mock_Timer_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Timer_init_IgnoreBool)
    Mock.Timer_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Timer_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Timer_init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.Timer_init_CallbackFunctionPointer != NULL)
    Mock.Timer_init_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.Timer_start_IgnoreBool)
    Mock.Timer_start_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Timer_start);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Timer_start_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.Timer_start_CallbackFunctionPointer != NULL)
    Mock.Timer_start_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_Timer_Init(void)
{
  Mock_Timer_Destroy();
}

void Mock_Timer_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.Timer_init_CallbackFunctionPointer = NULL;
  Mock.Timer_init_CallbackCalls = 0;
  Mock.Timer_start_CallbackFunctionPointer = NULL;
  Mock.Timer_start_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

Timer* Timer_init(int count, int period, int eventSignal)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_Timer_init);
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_init_CallInstance);
  Mock.Timer_init_CallInstance = CMock_Guts_MemNext(Mock.Timer_init_CallInstance);
  if (Mock.Timer_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Timer_init_FinalReturn;
    Mock.Timer_init_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->IgnoreArg_count)
  {
    UNITY_SET_DETAILS(CMockString_Timer_init,CMockString_count);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_count, count, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_period)
  {
    UNITY_SET_DETAILS(CMockString_Timer_init,CMockString_period);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_period, period, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_eventSignal)
  {
    UNITY_SET_DETAILS(CMockString_Timer_init,CMockString_eventSignal);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_eventSignal, eventSignal, cmock_line, CMockStringMismatch);
  }
  if (Mock.Timer_init_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.Timer_init_CallbackFunctionPointer(count, period, eventSignal, Mock.Timer_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Timer_init(CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance, int count, int period, int eventSignal)
{
  cmock_call_instance->Expected_count = count;
  cmock_call_instance->IgnoreArg_count = 0;
  cmock_call_instance->Expected_period = period;
  cmock_call_instance->IgnoreArg_period = 0;
  cmock_call_instance->Expected_eventSignal = eventSignal;
  cmock_call_instance->IgnoreArg_eventSignal = 0;
}

void Timer_init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Timer* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_init_CALL_INSTANCE));
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_init_CallInstance = CMock_Guts_MemChain(Mock.Timer_init_CallInstance, cmock_guts_index);
  Mock.Timer_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Timer_init_IgnoreBool = (int)1;
}

void Timer_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int count, int period, int eventSignal, Timer* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_init_CALL_INSTANCE));
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_init_CallInstance = CMock_Guts_MemChain(Mock.Timer_init_CallInstance, cmock_guts_index);
  Mock.Timer_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Timer_init(cmock_call_instance, count, period, eventSignal);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void Timer_init_StubWithCallback(CMOCK_Timer_init_CALLBACK Callback)
{
  Mock.Timer_init_CallbackFunctionPointer = Callback;
}

void Timer_init_CMockIgnoreArg_count(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_init_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_count = 1;
}

void Timer_init_CMockIgnoreArg_period(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_init_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_period = 1;
}

void Timer_init_CMockIgnoreArg_eventSignal(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_init_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_eventSignal = 1;
}

void Timer_start(Timer* const me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_Timer_start);
  CMOCK_Timer_start_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_start_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Timer_start_CallInstance);
  Mock.Timer_start_CallInstance = CMock_Guts_MemNext(Mock.Timer_start_CallInstance);
  if (Mock.Timer_start_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (!cmock_call_instance->IgnoreArg_me)
  {
    UNITY_SET_DETAILS(CMockString_Timer_start,CMockString_me);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_me, me, cmock_line, CMockStringMismatch);
  }
  if (Mock.Timer_start_CallbackFunctionPointer != NULL)
  {
    Mock.Timer_start_CallbackFunctionPointer(me, Mock.Timer_start_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_Timer_start(CMOCK_Timer_start_CALL_INSTANCE* cmock_call_instance, Timer* const me)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->IgnoreArg_me = 0;
}

void Timer_start_CMockIgnore(void)
{
  Mock.Timer_start_IgnoreBool = (int)1;
}

void Timer_start_CMockExpect(UNITY_LINE_TYPE cmock_line, Timer* const me)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Timer_start_CALL_INSTANCE));
  CMOCK_Timer_start_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_start_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Timer_start_CallInstance = CMock_Guts_MemChain(Mock.Timer_start_CallInstance, cmock_guts_index);
  Mock.Timer_start_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_Timer_start(cmock_call_instance, me);
  UNITY_CLR_DETAILS();
}

void Timer_start_StubWithCallback(CMOCK_Timer_start_CALLBACK Callback)
{
  Mock.Timer_start_CallbackFunctionPointer = Callback;
}

void Timer_start_CMockIgnoreArg_me(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_Timer_start_CALL_INSTANCE* cmock_call_instance = (CMOCK_Timer_start_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.Timer_start_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_me = 1;
}

