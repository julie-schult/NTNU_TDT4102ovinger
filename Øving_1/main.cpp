#include "std_lib_facilities.h"

//Oppgave 2a ----------------------------------------------

int maxOfTwo (int a,int b){
    if (a>b){
        cout << "A is greater than B\n";
        return a;
    }
    else{
        cout << "B is greater than or equal to A\n";
        return b;
    }
}

//Oppgave 2c ----------------------------------------------
int fibonacci(int n){
    int a=0;
    int b=1;
    cout << "Fibonacci numbers:"<< endl;
    for (int x=1;x<n+1;++x){
        cout << x << " " << b << endl;
        int temp=b;
        b+=a;
        a=temp;
    }
    cout<<"----"<<endl;
    return b;
}

//Oppgave 2d ----------------------------------------------
int squareNumberSum(int n){
    int totalSum=0;
    for (int i=0;i<n;++i){
        totalSum+=i*i;
        cout << (i*i) << endl;
    }
    cout << totalSum<<endl;
    return totalSum;
}

//Oppgave 2e ----------------------------------------------
void triangleNumbersBelow(int n){
    int acc=1;
    int num=2;
    cout << "Triangle numbers below" << n << "/n";
    while (acc<n){
        cout << acc << ":\n";
        acc+=num;
        num+=1;
    }
    cout << "\n";
}

//Oppgave 2f ----------------------------------------------
bool isPrime(int n){
    for (int j=2;j<n;++j){
        if (n%j==0){
            return false;
        }
    }
    return true;
}

//Oppgave 2g ----------------------------------------------
void naivePrimeNumberSearch(int n){
    for (int number=2;number<n;++number){
        if (isPrime(number)){
            cout << number << " is a prime" << "\n";
        }
    }
}
//Oppgave 2h ----------------------------------------------
void findGreatestDivisor(int n){
    for (int divisor=n-1;divisor>0;divisor-=1){
        if (n%divisor==0){
            cout << divisor << '\n';
        }
    }
	return;
}


//sjekk ----------------------------------------------
int main()
{
	cout << "Oppgave a)\n";
	cout << maxOfTwo(5,6) << '\n';

	cout << "Oppgave c)\n";
	cout << fibonacci(1) << '\n';

	cout << "Oppgave d\n";
	cout << squareNumberSum(3) << '\n';

	cout << "Oppgave e\n";
	triangleNumbersBelow(5);

	cout << "Oppgave f\n";
	std::cout << std::boolalpha << isPrime(5) << '\n' << std::endl;

	cout << "Oppgave g\n";
	naivePrimeNumberSearch(5);

	cout << "Oppgave h\n";
	findGreatestDivisor(9);

	keep_window_open();
}