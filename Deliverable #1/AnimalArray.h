#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H

class AnimalArray{
public:
  AnimalArray();
  ~AnimalArray();
  int add(Animal*);
  Anim* get(int);

private:
  Animal elements[MAX_ANIMAL];
  int size;

};

#endif
