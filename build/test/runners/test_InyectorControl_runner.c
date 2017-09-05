/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "Mock_InyectorControlAct.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_DefaultStateAfterInit(void);
extern void test_AnUnhandledEventDoesNotChangeState(void);
extern void test_StateTransitionTableForOff(void);
extern void test_StateTransitionTableForStarting(void);
extern void test_StateTransitionTableForIdleSpeed(void);
extern void test_StateTransitionTableForNormal(void);
extern void test_StateTransitionTableForNormal_UnhandledEvents(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  Mock_InyectorControlAct_Init();
}
static void CMock_Verify(void)
{
  Mock_InyectorControlAct_Verify();
}
static void CMock_Destroy(void)
{
  Mock_InyectorControlAct_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_InyectorControl.c");
  RUN_TEST(test_DefaultStateAfterInit, 84);
  RUN_TEST(test_AnUnhandledEventDoesNotChangeState, 92);
  RUN_TEST(test_StateTransitionTableForOff, 101);
  RUN_TEST(test_StateTransitionTableForStarting, 110);
  RUN_TEST(test_StateTransitionTableForIdleSpeed, 120);
  RUN_TEST(test_StateTransitionTableForNormal, 135);
  RUN_TEST(test_StateTransitionTableForNormal_UnhandledEvents, 150);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}