#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_administration()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,administration(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_administration);
  return UNITY_END();
}