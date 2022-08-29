
#include <iostream>
//This is imports the function daclation, the compiled object file will not have the binary file to run the function, the linker provides this.
#include "testfunction.hpp"


int main()
{

    double  TestNumber = 98.765432;
    // Also you can write
    //double  TestNumber = 98.765432;

    std::cout << "Hello, Oh Cruel World\n";
    std::cout << "The Number is: " << TestFunction(TestNumber) << std::endl;
}
