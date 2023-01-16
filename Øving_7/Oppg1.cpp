#include "Oppg1.h"

//------------------------------------------------------------------------------'

//Oppgave 1a: Private kan bare aksesseres av klassen, public kan aksesseres av alle og protective kan aksesseres av klassen og dens arvklasser

void Animal::testAnimal(){
    //Animal animal("Hans", 10);
    Dog dog("Max",5);
    Cat cat("Pus",1);
    Vector_ref<Animal> AnimalVector;
    //AnimalVector.push_back(animal);
    AnimalVector.push_back(dog);
    AnimalVector.push_back(cat);
    for (Animal *i: AnimalVector){ //*igjør at du henter innholdet i vektoren
        cout<<i->toString()<<endl; //i er en peker
    }
}
//med virtual kan ikke Animal brukes direkte