#include "Shop.h"
#include "defs.h"
#include <string>

int Shop::addAnimal(Animal* c){
  return animals.add(c);
}

Animal& Shop::getAnimal(int i){
  return *(animals.get(i));
}

AnimalArray& Shop::Animals(){
  return animals;
}
