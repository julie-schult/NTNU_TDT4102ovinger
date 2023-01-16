#include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include "Graph.h"
#include "Simple_window.h"

//Oppgave 1a--------------------------------------------------------------------
void inputAndPrintInteger(){
    int x=0;
    cout <<"Skriv inn et tall: ";
    cin >> x;
    cout << "Du skrev: " << x << endl;
}
//Oppgave 1b--------------------------------------------------------------------
int inputInteger(){
    int n=0;
    cout <<"Skriv inn et tall: ";
    cin >> n;
    return n;
}
//Oppgave 1c--------------------------------------------------------------------
void inputIntegersAndPrintSum(){
	int x=inputInteger();
	int y=inputInteger();
	cout<<"Summen av tallene: "<<x+y<<endl;
}
//Oppgave 1d--------------------------------------------------------------------

//Oppgave 1e--------------------------------------------------------------------
bool isOdd(int a){
	return a%2;
}
//Oppgave 1f--------------------------------------------------------------------
void printHumanReadableTime(int sec){
	int hr=sec/3600;
	int min=sec/60-hr*60;
	int s=sec-(hr*3600+min*60);
	cout<<hr<<" time(r), "<<min<<" minutt(er) og "<<s<<" sekund(er)"<<endl;
}


//Oppgave 2a--------------------------------------------------------------------
void sumtall(){
	int antall=0;
	int tall=0;
	int summen=0;
	cout<<"Antall tall som skal summeres: ";
	cin >> antall;
	for (int x=0;x<antall;++x){
		cout<<"Skriv inn et tall: ";
		cin>>tall;
		summen+=tall;
	}
	cout<<"Sum: "<< summen <<endl;
}

//Oppgave 2b--------------------------------------------------------------------
void sumwhile(){
	int tall=0;
	int summen=0;
	cout<<"Tall: ";
	cin>>tall;
	summen=tall;
	while (tall!=0){
		cout<<"Tall: ";
		cin>>tall;
		summen+=tall;
	}
	cout<<"Summen: "<< summen<<endl;;
}
//Oppgave 2c--------------------------------------------------------------------

//Oppgave 2d--------------------------------------------------------------------
double inputDouble(){
	double n=0.0;
    cout <<"Skriv inn et tall: ";
    cin >> n;
    return n;
}
//Oppgave 2e--------------------------------------------------------------------
void nokeuro(){
	double nok;
	double kurs=9.75;
    cout <<"Skriv inn et beløp i NOK: ";
    cin >> nok;
	while (nok<0){
		cout <<"Skriv inn et POSITIVT tall: ";
    	cin >> nok;
	}
	double euro=nok/kurs;
	std::cout<<std::fixed;
	std::cout<<std::setprecision(2);
	std::cout<<nok<<"kr i euro er: "<<euro<<"euro."<<std::endl;
}
//Oppgave 2f--------------------------------------------------------------------


//Oppgave 3a--------------------------------------------------------------------

//Oppgave 3b--------------------------------------------------------------------

void gangetabell(){
	int x;
	int y;
	cout<<"Bredde: ";
	cin>>x;
	cout<<"Høyde: ";
	cin>>y;
	for (int n=1;n<y+1;++n){
		for (int m=1; m<x+1;++m){
			cout<<setw(5)<<n*m;
		}
		cout<<"/n";
	}
}

//Oppgave 4a--------------------------------------------------------------------
double discriminant(double a, double b, double c){
	double svar=b*b-(4*a*c);
	return svar; 
}
//Oppgave 4b--------------------------------------------------------------------
void printRealRoots(double a, double b, double c){
	double solution=discriminant(a,b,c);
	if (solution>0){
		double sol1=(-b+sqrt(solution))/(2*a);
		double sol2=(-b-sqrt(solution))/(2*a);
		cout<<"2 solutions: "<<sol1<<" and "<<sol2<<endl;
		return;
	}
	if (solution<0){
		cout<<"No solutions."<<endl;
		return;
	}
	else{
		double sol=(-b)/(2*a);
		cout<<"1 solution: "<<sol<<endl;
		return;
	}
}
//Oppgave 4c--------------------------------------------------------------------
void solveQuadraticEquation(){
	double a;
	double b;
	double c;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	printRealRoots(a,b,c);
}
//Oppgave 4d--------------------------------------------------------------------

//Oppgave 4e--------------------------------------------------------------------


//Oppgave 5a-d------------------------------------------------------------------
void pytagoras(){
	Simple_window win{Point{100,100},300,300,"Pythagoras"};

	Graph_lib::Polygon rightTriangle;
	rightTriangle.add(Point{100,100});
	rightTriangle.add(Point{100,200});
	rightTriangle.add(Point{200,100});
	rightTriangle.set_fill_color(Color::black);

	Graph_lib::Polygon Square1;
	Square1.add(Point{100,200});
	Square1.add(Point{100,100});
	Square1.add(Point{0,100});
	Square1.add(Point{0,200});
	Square1.set_fill_color(Color::green);

	Graph_lib::Polygon Square2;
	Square2.add(Point{100,0});
	Square2.add(Point{200,0});
	Square2.add(Point{200,100});
	Square2.add(Point{100,100});
	Square2.set_fill_color(Color::blue);	

	Graph_lib::Polygon Square3;
	Square3.add(Point{200,100});
	Square3.add(Point{300,200});
	Square3.add(Point{200,300});
	Square3.add(Point{100,200});
	Square3.set_fill_color(Color::red);

	win.attach(rightTriangle);
	win.attach(Square1);
	win.attach(Square2);
	win.attach(Square3);
	win.wait_for_button();
}

//Oppgave 6a--------------------------------------------------------------------
void calculateSeries(int a, int b, int c){
	int betal=10000/10+(5/100)*9000;
	
	cout<<betal<<endl;
}
//Oppgave 6b--------------------------------------------------------------------

//Oppgave 6c--------------------------------------------------------------------

//------------------------------------------------------------------------------
int main() {
		/*
	cout<<"Oppgave 1a-----"<<endl;
	inputAndPrintInteger();
	cout<<"Oppgave 1b-----"<<endl;
	cout << "Du skrev: " << number << endl;
	cout<<"Oppgave 1c-----"<<endl;
	inputIntegersAndPrintSum();
	cout<<"Oppgave 1d-----"<<endlcout << "Bruker oppgave 1b i 1c fordi verdiene blir returnert, ikke skrevet ut."
	cout<<"Oppgave 1e-----"<<endl;
	for (int x=0; x<16;++x) {
		std::cout<<std::boolalpha<<isOdd(x)<<std::endl;
	}
	cout<<"Oppgave 1f-----"<<endl;
	printHumanReadableTime(10000);

	cout<<"Oppgave 2a-----"<<endl;
	sumtall();
	cout<<"Oppgave 2b-----"<<endl;
	sumwhile();
	cout<<"Oppgave 2c-----"<<endl;
	cout << "For-løkker brukes når man vet antall ganger koden skal kjøres. ";
	cout<<"While-løkker brukes når man ikke vet hvor mange ganger koden skal kjøres."<<endl;
	cout<<"Oppgave 2d-----"<<endl;
	double a=inputDouble();
	cout << "Du skrev: " << a << endl;
	cout<<"Oppgave 2e-----"<<endl;
	nokeuro();
	cout<<"Oppgave 2f-----"<<endl;
	cout<<"Dersom man bruker inputInteger vil tallet bli rundet av, og vi får dermed ikke eksakt svar."<<endl;
	*/
	
	cout<<"Oppgave 3a-----"<<endl;
	/*
	int valg;
	cout<<"Velg funksjon:\n"<<"(0) Avslutt\n"<<"(1) Summer to tall\n"<<"(2) Summer flere tall\n"<<"(3) Konverter NOK til EURO.\n"<<endl;
	cout<<"Angi valg (0-3):";
	cin>>valg;
	while(valg!=0){
		if (valg==1){
			inputIntegersAndPrintSum();
		}
		if (valg==2){
			sumtall();
		}
		if (valg==3){
			nokeuro();
		}
		cout<<"Angi valg (0-3):";
		cin>>valg;
	}
	*/
	cout<<"Oppgave 3b-----"<<endl;
	// gangetabell();

	cout<<"Oppgave 4a-----"<<endl;
	//discriminant(1,4,4);
	cout<<"Oppgave 4b-----"<<endl;
	//printRealRoots(1,4,4);
	cout<<"Oppgave 4c-----"<<endl;
	solveQuadraticEquation();
	cout<<"Oppgave 4d-----"<<endl;
	cout<<"Oppgave 4e-----"<<endl;	

	cout<<"Oppgave 5a-----"<<endl;
	pytagoras();

	cout<<"Oppgave 6a-----"<<endl;
	cout<<"Oppgave 6b-----"<<endl;
	cout<<"Oppgave 6c-----"<<endl;
	keep_window_open();
}