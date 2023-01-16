#include "std_lib_facilities.h"
#pragma once

//oppgave 1----------------------------------------------------------------------
class Car{
    private:
        int freeSeats;
    public:
        Car(int n): freeSeats{n} {};
        bool hasFreeSeats() const; 
        void reserveFreeSeat();
};
//oppgave 2----------------------------------------------------------------------
class Person{
    private:
        string name;
        string email;
        Car* car;
    public:
        Person(string name, string email, Car* car=nullptr) : name{name}, email{email}, car{car} {};
        string getName() const;
        string getEmail() const;
        void setEmail(string NewEmail);
        bool hasAvailableSeats();
        friend ostream& operator<<(ostream& os, const Person& p);
};