#include "Fibonacci.h"
#include "Matrix.h"
#include "Dummy.h"

void DummyTest(){
    Dummy a;
	*a.num = 4;
	Dummy b{ a };
	Dummy c;
	c = a;
	cout << "a: " << *a.num << endl;
	cout << "b: " << *b.num << endl;
	cout << "c: " << *c.num << endl;

	*b.num = 3;
	*c.num = 5;

	cout << "a: " << *a.num << endl;
	cout << "b: " << *b.num << endl;
	cout << "c: " << *c.num << endl;

	cin.get();
}
/*Output on Dummytest
    a: 4
    b: 4
    c: 4
    a: 5
    b: 5
    c: 5
*/
Dummy::Dummy(const Dummy &d){ 
    num= new int{0}; //pekeren 0 får en plass i minnet
    *num=*d.num; //får ikke samme plass i minnet
}
Dummy &Dummy::operator=(Dummy d){
    swap(num, d.num);
    return *this; //this er venstre side på =
}