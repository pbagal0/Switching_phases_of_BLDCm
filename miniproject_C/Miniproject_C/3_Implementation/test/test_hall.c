#include "../inc/header.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include<stdio.h>
//testing file
///Unity framework requires this function (works as a constructor for a test)
void setUp(){}
///Unity framework requires this function(works as a destructor for a test)
void tearDown(){}

void test_Decoder(void){                  //test function1
  int a=1;
  int b=1;
  int c=1;
  int *x=&a;
  int *y=&b;
  int *z=&c;
    TEST_ASSERT_EQUAL(1, decoder(1,2,3,x,y,z));
}
int test_main(void){
//starting unity  process
    UNITY_BEGIN();
// testing the function
    RUN_TEST(test_Decoder);

//end of tetsing
    return UNITY_END();
}
