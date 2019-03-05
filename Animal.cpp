#include "DataModel/Animal.h"

// id, name, age, sex, color, height, weight, breed, type(dog/cat/bird)
Animal::Animal(int id, QString n, int a, QString s, QString c, int ht, double wt, QString b, AnimalType animaltype){
    petID  = id;
    name   = n;
    age    = a;
    sex    = s;
    color  = c;
    height = ht;
    weight = wt;
    breed  = b;
    type   = animaltype;
}

int        Animal::getPetID(){return petID;}
QString    Animal::getSex(){return sex;}
QString    Animal::getName(){return name;}
int        Animal::getAge(){return age;}
int        Animal::getHeight(){return height;}
double     Animal::getWeight(){return weight;}
QString    Animal::getBreed(){return breed;}
QString    Animal::getColor(){return color;}
AnimalType Animal::getType(){return type;}
void       Animal::setName(QString n){name = n;}
void       Animal::setHeight(int h){height = h;}
void       Animal::setWeight(double w){weight = w;}
void       Animal::setAge(int a){age = a;}

//Animal::~Animal(){}
