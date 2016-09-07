/*********************************************************************

** Author: Mike Peters

** Date: 06/27/2015

** Description: ask for and display favorite animal

*********************************************************************/ 
#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}
