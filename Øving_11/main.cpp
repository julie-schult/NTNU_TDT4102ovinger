#include <iostream>
#include "Iterator.h"
//------------------------------------------------------------------------------'

int main()
{
	std::vector<std::string> vec{"Lorem", "Ipsum", "Dolor", "Sit", "Amet", "Consectetur"};

	int a=0;
	std::cout<<"Velg oppgave som skal kjøres (1-5): ";
	std::cin>>a;
		switch(a){
			case 0:
				break;
			case 1:
				std::cout<<"Vector: "<<std::endl;
					printVector(vec);
				std::cout<<"Vector reversed: "<<std::endl;
					reverseVector(vec);
				std::cout<<"Replacing vector:"<<std::endl;
					replace(vec, "Lorem", "Latin");
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
				
			case 5:
				
				break;
		}
}

//------------------------------------------------------------------------------
