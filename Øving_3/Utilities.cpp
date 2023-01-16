#include "std_lib_facilities.h"
#include "Utilities.h"
#include "cannonball.h"
#include <math.h>
//------------------------------------------------------------------------------

int randomWithLimits(int upperlimit, int lowerlimit){
    int tall=rand()%(upperlimit+1-lowerlimit)+lowerlimit;
    return tall;
}

void playTargetPractice(){
    for (int i=0; i<10;++i){
        double vinkel = getUserInputTheta();
        double fart = getUserInputAbsVelocity();
        double velX = getVelocityX(vinkel, fart);
        double velY = getVelocityY(vinkel, fart);
        int blink = randomWithLimits(100, 1000);
        double feil = targetPractice(blink, velX, velY);
        double distanse = getDistanceTraveled(velX, velY);
        if (feil>5){
            cout << "blinken var " << blink << " meter unna, kastet var " << abs(feil) << " for kort!" << endl;
            cout << "kastet ditt var " << distanse << " mter langt" << endl;
            cout << "kulen brukte";
            printTime(flightTime(velY));
            cout << "på reisen." << endl;
        }
        else if (feil < -5){
            cout << "blinken var " << blink << " meter unna, kastet var " << abs(feil) << " for langt!" << endl;
            cout << "kastet ditt var " << distanse << " mter langt" << endl;
            cout << "kulen brukte";
            printTime(flightTime(velY));
            cout << "på reisen." << endl;
        }
        else{
            cout << "Du traff blink! Gratulerer!" << endl;
            break;
        }
        if (i<9){
            cout << "Prøv igjen" << endl;
        }
        else{
             cout << "Du tapte" << endl;
        }
    }
}