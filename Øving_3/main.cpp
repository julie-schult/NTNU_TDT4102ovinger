#include "std_lib_facilities.h"
#include "cannonball.h"
#include "Utilities.h"
//------------------------------------------------------------------------------'
void testDeviation(double compareOperand, double toOperand, double maxError, string name){
    double error = abs(toOperand - compareOperand);
	cout << "Tester: " << name << endl;
		if (error > maxError){
			cout << "Ikke tilnærmet like, med en differanse på " << error << endl;
		}
		else{
			cout << "Tilnærmet like, med en differanse på" << error << endl;
		}
}

int main()
{
	cout << "Oppgave 3" << endl;
	testDeviation(posX(0.0,50.0,5.0), 250.0, 0.0001, "posX(0.0,50.0,5.0)");
	testDeviation(posY(0.0,25.0,5.0), 2.375, 0.0001, "posY(0.0,25.0,5.0)");
	testDeviation(velY(25.0,5.0), -24.05, 0.0001, "velY(25.0, 5.0)");
	testDeviation(flightTime(25.0),5.097, 0.001, "flightTime(25.0)");

	cout << "Oppgave 4" << endl;
	testDeviation(getVelocityX(60,20),10,0.01, "getVelocityX(60,20)");
	testDeviation(getVelocityY(90,20),20,0.01, "getVelocityY(60,20)");
	testDeviation(getDistanceTraveled(20,20),81.549,0.001, "getDistanceTraveled(20,20)");

	cout<<"Oppgave 5"<<endl;
	playTargetPractice();
	keep_window_open();
}