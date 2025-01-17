/**
* @file main.cpp
* @author Jagadesh Nischal Nagireddi (Driver), Toyas Dhake (Navigator)
* @date 26 Spetember 2019
* @copyright 2019 Jagadesh Nischal Nagireddi, Toyas Dhake
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/


#include <iostream>
#include "PID.h"


/**
* @brief Main compute function for PID Controller
* @author Jagadesh Nagareddi, Toyas Dhake
*/
int main()
{
    double change;
    //Contructor initializing value Kp, Kd, Ki, SampleTime, OutMax, OutMin
    PID mobileRobot(1,1,1, 13, 20, 0);
    //Main compute function 
    change = mobileRobot.compute(0,0);
    return 0;
}
