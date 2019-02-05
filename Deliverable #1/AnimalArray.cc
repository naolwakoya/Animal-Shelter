#include <iomanip>
#include "defs.h"
#include "AnimalArray.h"
#include "Animal.h"


AnimalArray::AnimalArray(){
  size = 0;
}

AnimalArray::~AnimalArray(){
  for (int i = 0; i < size; i++){
    delete elements[i];
  }

}

int AnimalArray::add(Animal* newAnimal){
  if(size > MAX_ANIMAL){
    return(C_NOK);
  }else{
    elements[size] = newAnimalArray;
    zize++;
    return(C_OK);
  }
}

int AnimalArray::getSize(){
  return size;
}

Anim* AnimalArray::get(int INDEX){
  return (elements[INDEX]);
}
