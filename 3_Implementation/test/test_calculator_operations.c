#include "unity.h"
#include <basic.h>
#include<bin_conv.h>
#include <trignometic.h>
#include<dim.h>

//#include<dim.h>
//#include<trignometic.h>


/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
//void trig_choose();
void test1();
void test2();
void test3();
void test4();



//void test_add_testcase2(void);
//void test_subtract(void);
//void test_multiply(void);
///void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(trig_choose);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);
  RUN_TEST(test4);

  
  /*RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
*/
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
//void trig_choose(void) {
  //TEST_ASSERT_EQUAL(0.5, sine(30));
//}
void test1(void)
{

  TEST_ASSERT_EQUAL(3, binarytodec(11));
  
  TEST_ASSERT_EQUAL(4,binarytodec(100));
  TEST_ASSERT_EQUAL(7,binarytodec(111));
  TEST_ASSERT_EQUAL(100, decimaltobin(4));
  TEST_ASSERT_EQUAL(1111, decimaltobin(15));
}





void test2(void)
{
   TEST_ASSERT_EQUAL(12,add(10,2));
     TEST_ASSERT_EQUAL(5,sub(10,5));
      TEST_ASSERT_EQUAL(20,mul(10,2));
       TEST_ASSERT_EQUAL(5,divd(10,2));
        TEST_ASSERT_EQUAL(1,remb(10,3));
         
}

void test3()
{
  TEST_ASSERT_EQUAL(0,sine(0));
  TEST_ASSERT_EQUAL(0.50,sine(30));
  TEST_ASSERT_EQUAL(1.0,cosine(0));
  TEST_ASSERT_EQUAL(0,cosine(90));
  TEST_ASSERT_EQUAL(0.50,cosine(60));
  TEST_ASSERT_EQUAL(1.0,tangent(45));
  TEST_ASSERT_EQUAL(0,tangent(0));
  
  //TEST_ASSERT_EQUAL(-1.0,cosine(180));
  //TRYING TO EDIT
}


void test4()
{
  TEST_ASSERT_EQUAL(30, F_to_C(86));
  TEST_ASSERT_EQUAL(86, C_to_F(30));
  TEST_ASSERT_EQUAL(1, g_to_kg(1000));
  TEST_ASSERT_EQUAL(1, cm_to_m(100));
  TEST_ASSERT_EQUAL(0.9144, foot_to_m(3));
  TEST_ASSERT_EQUAL(35.94444, F_to_C(96.7));
  TEST_ASSERT_EQUAL(2205, kg_to_pd(1000));
  TEST_ASSERT_EQUAL(1000, km_to_m(1));
}




  //TEST_ASSERT_EQUAL(-10, add(10, -20));

/*
void test_add_testcase2(void) {
 
  
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
 
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
*/
