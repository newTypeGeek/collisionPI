#include "computePi.h"
#include <iostream>

int main() {
    std::cout << "****************************************************************" << std::endl;
    std::cout << "****                                                        ****" << std::endl;
    std::cout << "****    Welcome to PI calculation using physics engine !    ****" << std::endl; 
    std::cout << "****                                                        ****" << std::endl;
    std::cout << "****************************************************************" << std::endl << std::endl;

    int digit = 0;
    std::cout << "Please enter the number of digit of PI you want to compute" << std::endl;
    std::cin >> digit;
    
    computePi(digit);


    return 0;
}
