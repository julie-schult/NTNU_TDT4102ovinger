#include "Person.h"

Person::Person(std::string firstName, std::string lastName): firstName(firstName), lastName(lastName) {}

std::string Person::getFirstName() const {
    return firstName; 
}
std::string Person::getLastName() const {
    return lastName; 
}
std::string Person::getFullName() const { 
    return firstName + " " + lastName; 
}

std::ostream& operator<<(std::ostream& os, const Person& p) {
    std::cout << p.getFullName() << std::endl;
    return os;
}

bool Person::operator<(const Person &p) const {
    return (getFullName() < p.getFullName());
}

void insertOrdered(std::list<Person> &l, const Person& p){
    
}