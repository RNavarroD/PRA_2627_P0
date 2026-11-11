#include "BrazoRobot.h"
#include <iostream>

//Constructor
RoboticArm::RoboticArm(double x, double y, double z, bool gripperOK)
    : x{x}, y{y}, z{z}, gripperOK{gripperOK} {}

//Metodos consultores
double RoboticArm::getCoorX(){
    return x;
}

double RoboticArm::getCoorY(){
    return y;
}

double RoboticArm::getCoorZ(){
    return z;
}

bool RoboticArm::getGripperStatus(){
    return gripperOK;
}

//Metodos de uso
void RoboticArm::grab(){
    gripperOK = true;
}

void RoboticArm::release(){
    gripperOK = false;
}

void RoboticArm::move(double newx, double newy, double newz){
    x = newx;
    y = newy;
    z = newz;
}
