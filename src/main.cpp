
#include <iostream>



int main()
{

    int TestNumber = 98765432;


    //The "\n" and std::endl are new lines, std::endl also forces a flush to the screen, which can be slower if you do a lot of them (normally the output is buffered and written in a much larger chunck) 
    std::cout << "Hello, Oh Cruel World\n";
    std::cout << "The Number is: " << TestNumber << std::endl;
}
