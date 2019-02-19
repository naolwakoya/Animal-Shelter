#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include "DataModel/defs.h"

class Animal{
public:
    Animal(int, QString, int, QString, QString, int, double, QString, AnimalType); // id, name, age, sex, color, height, weight, breed, type
    int        getPetID();
    QString    getSex();
    QString    getName();
    int        getAge();
    int        getHeight();
    double     getWeight();
    QString    getBreed();
    QString    getColor();
    AnimalType getType();
    void       setName(QString);
    void       setHeight(int);
    void       setWeight(double);
    void       setAge(int);
protected:
    int        petID;
    QString    name;
    int        age;
    QString    sex;
    QString    color;
    int        height; // in cm
    double     weight; // in lbs
    AnimalType type;
    QString    breed;
};
#endif // ANIMAL_H
