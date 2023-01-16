#include "car.h"
#include "meeting.h"
#include "MeetingWindow.h"

//------------------------------------------------------------

// C++ programs start by executing the function main
int main()
{
	//Oppgave 1

	//Oppgave 2
		Person person1=Person("Julie","julie@schult.no",nullptr);
		cout<<person1<<endl;
		Car fullCar(0);
		Person person2=Person("Sigrid", "sigrid@mail.no",&fullCar);
		cout<<person2<<endl;
		Car car(5);
		Person person3=Person("Laura","laura@mail.no",&car);
		cout<<person3<<endl;
	//Oppgave 4
		MeetingWindow vindu{Point{200,200},500,500,"Vindu"};
		gui_main();
		vindu.printVector();
	//
	keep_window_open();
}

//-------------------------------------------------------------