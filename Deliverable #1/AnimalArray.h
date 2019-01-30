#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
public:
  AnimalArray();
  ~AnimalArray();
  int addAnimal(Animal*);
  int getSize();
  Anim* get(int);
private:
  Animal elements[MAX_ANIMAL];
  int size;

};

#endif
