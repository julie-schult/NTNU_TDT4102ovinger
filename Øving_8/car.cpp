#include "car.h"
#include "meeting.h"

//oppgave 1----------------------------------------------------------------------
bool Car::hasFreeSeats() const{
    if (freeSeats!=0){
        return true;
    }
    else{
        return false;
    }
}

void Car::reserveFreeSeat() {
    int seats=freeSeats-1;
}
//oppgave 2----------------------------------------------------------------------
string Person::getName() const{
    return name;
}
string Person::getEmail() const{
    return email;
}
void Person::setEmail(string NewEmail){
    email = NewEmail;
}
bool Person::hasAvailableSeats(){
    if (car != nullptr ) {
        return car->hasFreeSeats();
    }
    return false;
}
ostream& operator<<(ostream& os, const Person& p) {
	return os << p.name << "; " << p.email<<"; "<<p.car<<endl;
}