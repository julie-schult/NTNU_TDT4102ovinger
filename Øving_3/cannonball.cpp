#include "std_lib_facilities.h"
#include "cannonball.h"
#include <math.h>
//------------------------------------------------------------------------------

double acclY(){
    double acc=-9.81;
    return acc;
}

double velY(double initVelocityY, double time){
    double a=acclY();
    double FartY=initVelocityY+(a*time);
    return FartY;
}

double posX(double initPosition, double initVelocity, double time){
    double PositionX=initPosition+initVelocity*time;
    return PositionX;
} 

double posY(double initPosition, double initVelocity, double time){
    double a=acclY();
    double PositionY=initPosition+initVelocity*time+(a*time*time)/2;
    return PositionY;
}

void printTime(double time){
    int h=time/3600;
    int m=time/60-h*60;
    double s=time-(m*60+h*3600);
    cout<<h<<" hours "<<m<<" minutes "<<s<<" seconds "<<endl;
}

double flightTime(double startY){
    double a=acclY();
    double flytime=-2*startY/a;
    return flytime;
}

double getUserInputTheta(){
    double vinkel;
    cout<<"Vinkel: ";
    cin>>vinkel;
    return vinkel;
}

double getUserInputAbsVelocity(){
    double absv;
    cout<<"Absolutt fart: ";
    cin>>absv;
    return absv;
}

double degToRad(double deg){
    double radian=deg*2*M_PI/360;
    return radian;
}

double getVelocityX(double theta, double absVelocity){
    double radian=degToRad(theta);
    double velX=absVelocity*cos(radian);
    return velX;
}
double getVelocityY(double theta, double absVelocity){
    double radian=degToRad(theta);
    double velY=absVelocity*sin(radian);
    return velY;
}

vector<double> getVelocityVector(double theta, double absVelocity){
    vector<double> vec;
    vec.push_back(getVelocityX(theta, absVelocity));
    vec.push_back(getVelocityY(theta, absVelocity));
    return vec;
}

double getDistanceTraveled(double velocityX, double velocityY){
    double time = flightTime(velocityY);
    double distance = posX(0, velocityX, time);
    return distance;
}

double targetPractice(double distanceToTarget, double velocityX,double velocityY){
    double avvik = distanceToTarget - getDistanceTraveled(velocityX, velocityY);
    return avvik;
}