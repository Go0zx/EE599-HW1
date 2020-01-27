#include "solution.h"
#include <iostream>
float Solution::FindMedian(std::vector<int> &inputs) {
  int oe;
  int medium;
  std::vector<int> temp;
  if (inputs.size() == 0) {
    return -1;
  }
  else {
    oe=inputs.size()%2;
    medium=inputs.size()/2;
  }
  std::sort(inputs.begin(), inputs.end());
  
  if(oe) return inputs[medium];
  else return ((float)inputs[medium-1]+(float)inputs[medium])/(float)2;
  
}

// int Solution::FindMaxRecursive(std::vector<int> &inputs) {
//   if (inputs.size() == 0) {
//     return -1;
//   }
//   return FindMaxRecursiveAux(inputs, 0, inputs.size());
// }

// int Solution::FindMaxRecursiveAux(std::vector<int> &inputs, int left,
//                                   int right) {
//   if (right == left + 1) {
//     return inputs[left];
//   }

//   int mid = (right + left) / 2;

//   return std::max(FindMaxRecursiveAux(inputs, left, mid),
//                   FindMaxRecursiveAux(inputs, mid, right));
// }
