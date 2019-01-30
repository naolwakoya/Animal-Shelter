#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
public:
  Animal(string, string);
  ~Animal();
  int getID();
  string getAnimalName();
  string getAnimalAge();
  int addAnimals(Animal*);
  AnimalType& getAnimals();

private:
  static int nextId;

  int id;
  string name;
  string age;


};

#endif
