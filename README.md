# collisionPI
Compute PI with specified number of digit from elastic collisions <br>
Reference: YouTube video: https://www.youtube.com/watch?v=HEfHFsfGXjs&list=PLZHQObOWTQDMalCO_AXOC5GWsuY8bOC_Y&index=2&t=0s

# How it works
1. First download this repository, or using command line: `git clone https://github.com/newTypeGeek/collisionPI.git`

2. Compile the source codes:
   ```
   g++ *.cpp -c
   g++ *.o
   ```

3. Run the program
   `./a.out`
   
   You will see the console output, asking the user to enter the number of digit of PI to compute
   ```
   ****************************************************************
   ****                                                        ****
   ****    Welcome to PI calculation using physics engine !    ****
   ****                                                        ****
   ****************************************************************

   Please enter the number of digit of PI you want to compute
   ```
   
   Let say we want to do 10 digits and we input 10 and press enter
   
   Then we have
   ```
   [INFO] computePi function is called
   [INFO] Pi is computed via a counting collisions from a physics engine
   [INFO] Number of digit for Pi = 10
   [INFO] countCollisions function is called
   [INFO] Simulation begins ... 
   [INFO] Time Elapsed (seconds) = 15.7324
   [INFO] Total number of collisions = 3141592653
   [INFO] Simulation finished
   [INFO] countCollisions function is completed
   [INFO] Computed Pi: 3.141592653
   ```
   The Pi is computed to be 3.141592653 (10 digits in total)
   
