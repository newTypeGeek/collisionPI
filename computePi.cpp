#include "countCollisions.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>

void computePi(int digit) {
    // Compute Pi with specific number of digit

    std::cout << "[INFO] computePi function is called" << std::endl;
    std::cout << "[INFO] Pi is computed via a counting collisions from a physics engine" << std::endl;

    double massRatio = std::pow(100, digit-1);
    double initSpeed = 1;

    std::cout << "[INFO] Number of digit for Pi = " << digit << std::endl;

    // Count the number of digit of ULLONG_MAX 
    // and check if the unsigned long long would wrap around
    unsigned long long tmp = ULLONG_MAX;
    unsigned int digit_max = 0;    
    while (tmp != 0 ) {
        tmp /= 10;
        ++digit_max;
    }

    if (digit >= digit_max) {
        std::cout << "[ERROR] Maximum number of digit allowed is " << digit_max << std::endl;
        std::cout << "        You are advised to choose a digit less than or equal to " << digit_max-1 << std::endl;
        std::cout << "EXIT" << std::endl;
        exit(1);
    }
    
    

    // Compute Pi by using the physics engine to count number of collisions 
    unsigned long long count = countCollisions(massRatio, initSpeed);

    std::cout << "[INFO] Computed Pi: " << std::setprecision(digit) << count/pow(10, digit-1) << std::endl;

    return;
}
