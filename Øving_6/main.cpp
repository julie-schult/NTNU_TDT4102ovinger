#include "std_lib_facilities.h"
#include "fil.h"
#include "three.h"
#include "four.h"
//------------------------------------------------------------------------------'

int main()
{	
	int a=0;
	cout<<"Funskjonstesting: ";
	cin>>a;
		switch(a){
			case 0:
				break;
			case 1:
				ReadWord();
				break;
			case 2:
				ReadCreate();
				break;
			case 3:
				CountLetters("grunnlov.txt");
				break;
			case 4:
				{vector<Temps> temps;
				string file="temperatures.txt";
				getTemps(temps, file);
				cout<<temps<<endl;
				break;}
		}
}

//------------------------------------------------------------------------------
