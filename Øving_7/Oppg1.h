#include "std_lib_facilities.h"
#pragma once
#include "Graph.h"
using namespace Graph_lib;

//------------------------------------------------------------------------------'
class Animal{
    private:
    public:
        virtual string toString()=0;
        Animal(string name, int age): name{name}, age{age} {}
        Animal()=default;
        void testAnimal();
    protected:
        string name;
        int age;
};

class Dog: public Animal{
    private:
    public:
        Dog(string name, int age): Animal{name, age} {}
        Dog()=default;
        string toString(){
            string s="Dog: " + name + ", "+ to_string(age);
            return s;};
    protected:
};

class Cat: public Animal{
    private:
    public:
        Cat(string name, int age): Animal{name, age} {}
        Cat()=default;
        string toString(){
            string s="Cat: " + name + ", "+ to_string(age);
            return s;};
    protected:
};