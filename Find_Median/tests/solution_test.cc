#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, test1) {
  Solution solution;
  std::vector<int> inputs = {1, 3, 3, 6, 7, 8, 9};
  EXPECT_EQ(solution.FindMedian(inputs), 6);
  // EXPECT_EQ(solution.FindMaxRecursive(inputs), 6);
}

TEST(FindMedianTest, test2) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 5, 6, 8, 9};
  EXPECT_EQ(solution.FindMedian(inputs), 4.5);
  // EXPECT_EQ(solution.FindMaxRecursive(inputs), 4.5);
}

TEST(FindMedianTest, test3) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
  // EXPECT_EQ(solution.FindMaxRecursive(inputs), 2);
}

TEST(FindMedianTest, test4) {
  Solution solution;
  std::vector<int> inputs = {3, 2, 1};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
  // EXPECT_EQ(solution.FindMaxRecursive(inputs), 2);
}

TEST(FindMedianTest, test5) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
  // EXPECT_EQ(solution.FindMaxRecursive(inputs), -1);
}
