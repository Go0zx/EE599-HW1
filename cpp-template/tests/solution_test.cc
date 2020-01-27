#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(Factorial5, returnFactorial5) {
  Solution solution;
  int actual1 = solution.Factorial(5);
  int actual2 = solution.Factorial_Recursive(5);
  int expected = 120;
  EXPECT_EQ(expected, actual1);
  EXPECT_EQ(expected, actual2);
}

TEST(Factorial0, returnFactorial0) {
  Solution solution;
  int actual1 = solution.Factorial(0);
  int actual2 = solution.Factorial_Recursive(0);
  int expected = 1;
  EXPECT_EQ(expected, actual1);
  EXPECT_EQ(expected, actual2);
  }

TEST(Factorial1, returnFactorial1) {
  Solution solution;
  int actual1 = solution.Factorial(1);
  int actual2 = solution.Factorial_Recursive(1);
  int expected = 1;
  EXPECT_EQ(expected, actual1);
  EXPECT_EQ(expected, actual2);
}

TEST(Factorial_1, returnFactorial_1) {
  Solution solution;
  int actual1 = solution.Factorial(-1);
  int actual2 = solution.Factorial_Recursive(-1);
  int expected = -1;
  EXPECT_EQ(expected, actual1);
  EXPECT_EQ(expected, actual2);
}