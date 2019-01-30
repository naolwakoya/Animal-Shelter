#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

#include "AnimalArray.h"

AnimalArray::AnimalArray(){
  size = 0;
}

AnimalArray::~AnimalArray() {
  for (int i = 0; i < size; i++){
    delete elements[i];
  }

}

int AnimalArray::addAnimal(Animal* newAnimal){
  if(size > MAX_ANIMAL){
    return(C_NOK);
  }else{
    elements[size] = newAnimal;
    zize++;
    return(C_OK);
  }
}

int AnimalArray::getSize(){
  return size;
}

Anim* AnimalArray::get(int INDEX){
  return (element[INDEX]);
}
