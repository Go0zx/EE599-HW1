#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1, 3, 3, 6, 7, 8, 9};
  std::cout << "inputs: {1, 3, 3, 6, 7, 8, 9}, output: " << solution.FindMedian(inputs)
            << std::endl;

  inputs = {1, 2, 3, 4, 5, 6, 8, 9};
  std::cout << "inputs: {1, 2, 3, 4, 5, 6, 8, 9}, output: " << solution.FindMedian(inputs) << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMedian(inputs) << std::endl;
  return 0;
}