#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

std::string Solution::Printinfo(){
  return "Name: Zixi Gu\nMajor: EE\n";

}

int Solution::Factorial(int n){
  int result=1;
  if(n<0) return -1;
  else if(n==0) return 1;
  for(int m=1; m<n+1; m++){
    result *=m;
  }
  return result;
}

int Solution::Factorial_Recursive(int n){
  int result=1;
  if(n<0) return -1;
  if(n>1) return n*Factorial_Recursive(n-1);
  if(n==1 || n==0) return result;
}
