/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_PWMInyector.h"

static const char* CMockString_PWMInyector_init = "PWMInyector_init";
static const char* CMockString_PWMInyector_setDuty = "PWMInyector_setDuty";
static const char* CMockString_duty = "duty";

typedef struct _CMOCK_PWMInyector_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_PWMInyector_init_CALL_INSTANCE;

typedef struct _CMOCK_PWMInyector_setDuty_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  unsigned char Expected_duty;
  int IgnoreArg_duty;

} CMOCK_PWMInyector_setDuty_CALL_INSTANCE;

static struct Mock_PWMInyectorInstance
{
  int PWMInyector_init_IgnoreBool;
  CMOCK_PWMInyector_init_CALLBACK PWMInyector_init_CallbackFunctionPointer;
  int PWMInyector_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE PWMInyector_init_CallInstance;
  int PWMInyector_setDuty_IgnoreBool;
  CMOCK_PWMInyector_setDuty_CALLBACK PWMInyector_setDuty_CallbackFunctionPointer;
  int PWMInyector_setDuty_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE PWMInyector_setDuty_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void Mock_PWMInyector_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.PWMInyector_init_IgnoreBool)
    Mock.PWMInyector_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_PWMInyector_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.PWMInyector_init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.PWMInyector_init_CallbackFunctionPointer != NULL)
    Mock.PWMInyector_init_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.PWMInyector_setDuty_IgnoreBool)
    Mock.PWMInyector_setDuty_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_PWMInyector_setDuty);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.PWMInyector_setDuty_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.PWMInyector_setDuty_CallbackFunctionPointer != NULL)
    Mock.PWMInyector_setDuty_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_PWMInyector_Init(void)
{
  Mock_PWMInyector_Destroy();
}

void Mock_PWMInyector_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.PWMInyector_init_CallbackFunctionPointer = NULL;
  Mock.PWMInyector_init_CallbackCalls = 0;
  Mock.PWMInyector_setDuty_CallbackFunctionPointer = NULL;
  Mock.PWMInyector_setDuty_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void PWMInyector_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_PWMInyector_init);
  CMOCK_PWMInyector_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_PWMInyector_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.PWMInyector_init_CallInstance);
  Mock.PWMInyector_init_CallInstance = CMock_Guts_MemNext(Mock.PWMInyector_init_CallInstance);
  if (Mock.PWMInyector_init_IgnoreBool)
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
  if (Mock.PWMInyector_init_CallbackFunctionPointer != NULL)
  {
    Mock.PWMInyector_init_CallbackFunctionPointer(Mock.PWMInyector_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void PWMInyector_init_CMockIgnore(void)
{
  Mock.PWMInyector_init_IgnoreBool = (int)1;
}

void PWMInyector_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_PWMInyector_init_CALL_INSTANCE));
  CMOCK_PWMInyector_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_PWMInyector_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.PWMInyector_init_CallInstance = CMock_Guts_MemChain(Mock.PWMInyector_init_CallInstance, cmock_guts_index);
  Mock.PWMInyector_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

void PWMInyector_init_StubWithCallback(CMOCK_PWMInyector_init_CALLBACK Callback)
{
  Mock.PWMInyector_init_CallbackFunctionPointer = Callback;
}

void PWMInyector_setDuty(unsigned char duty)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_PWMInyector_setDuty);
  CMOCK_PWMInyector_setDuty_CALL_INSTANCE* cmock_call_instance = (CMOCK_PWMInyector_setDuty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.PWMInyector_setDuty_CallInstance);
  Mock.PWMInyector_setDuty_CallInstance = CMock_Guts_MemNext(Mock.PWMInyector_setDuty_CallInstance);
  if (Mock.PWMInyector_setDuty_IgnoreBool)
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
  if (!cmock_call_instance->IgnoreArg_duty)
  {
    UNITY_SET_DETAILS(CMockString_PWMInyector_setDuty,CMockString_duty);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_duty, duty, cmock_line, CMockStringMismatch);
  }
  if (Mock.PWMInyector_setDuty_CallbackFunctionPointer != NULL)
  {
    Mock.PWMInyector_setDuty_CallbackFunctionPointer(duty, Mock.PWMInyector_setDuty_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_PWMInyector_setDuty(CMOCK_PWMInyector_setDuty_CALL_INSTANCE* cmock_call_instance, unsigned char duty)
{
  cmock_call_instance->Expected_duty = duty;
  cmock_call_instance->IgnoreArg_duty = 0;
}

void PWMInyector_setDuty_CMockIgnore(void)
{
  Mock.PWMInyector_setDuty_IgnoreBool = (int)1;
}

void PWMInyector_setDuty_CMockExpect(UNITY_LINE_TYPE cmock_line, unsigned char duty)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_PWMInyector_setDuty_CALL_INSTANCE));
  CMOCK_PWMInyector_setDuty_CALL_INSTANCE* cmock_call_instance = (CMOCK_PWMInyector_setDuty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.PWMInyector_setDuty_CallInstance = CMock_Guts_MemChain(Mock.PWMInyector_setDuty_CallInstance, cmock_guts_index);
  Mock.PWMInyector_setDuty_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_PWMInyector_setDuty(cmock_call_instance, duty);
  UNITY_CLR_DETAILS();
}

void PWMInyector_setDuty_StubWithCallback(CMOCK_PWMInyector_setDuty_CALLBACK Callback)
{
  Mock.PWMInyector_setDuty_CallbackFunctionPointer = Callback;
}

void PWMInyector_setDuty_CMockIgnoreArg_duty(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_PWMInyector_setDuty_CALL_INSTANCE* cmock_call_instance = (CMOCK_PWMInyector_setDuty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.PWMInyector_setDuty_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_duty = 1;
}

