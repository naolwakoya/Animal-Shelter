#include <iomanip>
#include <string>
#include "Animal.h"

Animal::Animal(string t, string n,string g,string c, int a){
  type = t;
  name = n;
  gender = gc;
  colour = c;
  age = a;
}

string Animal::getType(){
  return (type);
}

string Animal::getName(){
  return (name);

}

string Animal::getGender(){
  return (gender);
}

string Animal::getColour(){
  return (colour);
}

int Animal::getAge(){
  return (age);
}
