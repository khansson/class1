


#include <iostream>
#include <fstream>
#include "testfunction.hpp"

#include <nlohmann/json.hpp>


int main()
{
    
    std::ifstream inputFileStream("inpu.json");
    nlohmann::json InputJson;

    inputFileStream >> InputJson;

    double  TestNumber = InputJson["data"].get<double>();;

    std::cout << "Hello, Oh Cruel World\n";
    std::cout << "The Number is: " << TestFunction(TestNumber) << std::endl;
}
