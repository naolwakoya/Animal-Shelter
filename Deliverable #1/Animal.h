#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal {
public:
  Animal(string, string, string, string, int);
  string getType();
  string getName();
  string getGender();
  string getColour();
  int getAge();

private:
  string type;
  string name;
  string gender;
  string colour;
  int age;


}
