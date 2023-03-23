#include "pch.h"
#include "D:\GoogleTest\Sample-Test1\HelloTest\doubler.cpp"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(6, doubler(3));
  EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName2) {
  EXPECT_EQ(5, doubler(3));
  EXPECT_TRUE(true);
}TEST(TestCaseName, TestName3) {
  EXPECT_EQ(18, doubler(9));
  EXPECT_TRUE(true);
}