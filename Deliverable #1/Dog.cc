#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Dog.h"

Dog::Dog(string nick) :Animal(nick){
  initHealth(nick);
}

Dog::~Dog() {
  cout << "--Deconstructor: Dog" << endl;

}

void Dog::initHealth(){

  health[0] = "";
  // health[1] = "";
  // health[2] = "";
  goodHealth = 1;
}
