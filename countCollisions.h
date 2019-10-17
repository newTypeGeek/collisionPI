#ifndef __countCollisions_H_INCLUDED__
#define __countCollisions_H_INCLUDED__

/* A wall is on the leftmost of a smooth surface. There are two blocks with mass ratio massRatio,
   with the block and the right hand side travelling at speed initSpeed to the left. 

   Assuming all collisions are elasic, we count the total number of collisions

   Arguments:
       1. double massRatio: a positive real number
       2. double initSpeed: a positive real number

   Returns:
       1. unsigned long long int numCollisions: total number of collisions (integer)
*/

unsigned long long int countCollisions(double massRatio, double initSpeed);

#endif
