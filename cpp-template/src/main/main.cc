#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
   // std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout << solution.Printinfo() << std::endl;

    std::cout << "non-recursive 5!= " << solution.Factorial(5) << std::endl;

    std::cout << "recursive     5!= " << solution.Factorial_Recursive(5) << std::endl;
    
    return EXIT_SUCCESS;
}