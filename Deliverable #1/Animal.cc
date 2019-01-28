#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

#include "Animal.h"

Animal::Animal(string nick)
  : name(nick), status("idle") { }

Animal::~Animal() {

}

string Animal::getName() const {
  return name;
}

string Animal::getStatus() const {
  return status;
}

void Animal::healthStatus(){
  status = nextMove();
  cout << endl << setw(15) << name << " has a good health: "

}

void Animal::healStatus() const{
  int num = rand() % goodHealth;

  return health[num];
}
