#include <iostream>
#include <ctime>

unsigned long long countCollisions(double massRatio, double initSpeed) {
    /*   The scenario

         Wall |     ----     initSpeed   ----        
              |    | m2 |    <--------- | m1 |        
              |     ----                 ----       
              ------------------------------------
                  Frictionless surface


          Two block of mass m1, and m2 are placed on a FRICTIONLESS surface.
          The left block with mass m1 is travelling to the LEFT with speed = initSpeed
          The right block with mass m2 is at rest.
        
          There are two kinds of collisions:
              1. Collision between two blocks
              2. Collision between the block with mass m2, and the Wall

          All these collisions are ELASTIC collisions


          Using conservation of kinetic energy and linear momentum,
          we know that updating the velocity of the blocks depends
              1. The velocity of both blocks before collisions
              2. The mass ratio of the blocks

          Hence, we define m1/m2 as massRatio


          
          Arguments:
              1. double massRatio: mass of m1 (since m2 is set to be 1)
              2. double initSpeed: initial speed of m1 travelling to the left

          Returns:
              1. unsigned long long numCollisions: total number of collisions

     */

    std::cout << "[INFO] countCollisions function is called" << std::endl;

    if (massRatio <= 0) {
        std::cout << "[ERROR] Mass ratio must be positive" << std::endl;
        std::cout << "EXIT" << std::endl;
        exit(0);
    }

    if (initSpeed <= 0) {
        std::cout << "[ERROR] Initial speed must be positive" << std::endl;
        std::cout << "EXIT" << std::endl;
        exit(0);
    }

    // vLeft: velocity of the left block
    // vRight: velocity of the right block
    // *** we choose the direction to the right as positive ***
    double vLeft = -initSpeed;
    double vRight = 0;

    // temporarily storing vLeft for updating velocity purpose
    double vLeftBefore = 0;

    // Total number of collision
    unsigned long long numCollisions = 0;

    

    // Keep counting the number of collisions
    std::cout << "[INFO] Simulation begins ... " << std::endl;
    clock_t startTime = clock();

    while ( !(vLeft >= vRight && vRight >= 0) )  {
        // Collision between two blocks
        ++numCollisions;

        // Update both blocks velocity
        vLeftBefore = vLeft;
        vLeft = ( (massRatio-1)*vLeftBefore + 2*vRight ) / (massRatio + 1);
        vRight = ( 2*massRatio*vLeftBefore + (1-massRatio)*vRight ) / (massRatio + 1);



        // Check if the right block can still collide with the wall
        if (vRight >= 0) {
            break;
        }

        // Check if numCollisions reaches the limit
        if ( numCollisions == ULLONG_MAX - 2 ) {
            std::cout << "[WARN] Number of collision is two units to maximum value" << std::endl;
            std::cout << "       unsigned long long max value is " << ULLONG_MAX << std::endl;
            std::cout << "EXIT" << std::endl;
            exit(0);
        } 



        // Collision between the right block and the wall
        ++numCollisions;
 
        // Update the velocity of the right block
        vRight = -vRight;
       
    }
    std::cout << "[INFO] Time Elapsed (seconds) = " << (double) (clock() - startTime)/CLOCKS_PER_SEC << std::endl;
    std::cout << "[INFO] Total number of collisions = " << numCollisions << std::endl;
    std::cout << "[INFO] Simulation finished" << std::endl;
    std::cout << "[INFO] countCollisions function is completed" << std::endl;

    return numCollisions;
}



