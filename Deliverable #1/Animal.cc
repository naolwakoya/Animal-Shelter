#include <iostream>
using namespace std;
#include <string>

#include "Animal.h"

Animal::Aniaml(string n, string a ){
  name = n;
  age = a;
  id = nextID++;

}

Animal::~Animal(){

}

int Animal::getID(){
  return id;
}

sting Animal::getAnimalName(){
  return name;
}

string Animal::getAnimalAge(){
  return age;
}

AnimalType& Animal::getAnimals(){
  return animals;
}

int Animal::addAnimals(Animal* animal){
  return animals.add(animal);
}
