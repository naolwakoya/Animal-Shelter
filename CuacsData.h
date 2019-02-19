#ifndef CUACSDATA_H
#define CUACSDATA_H

#include "DataModel/Animal.h"
#include "DataModel/AnimalList.h"
#include <QString>
#include <vector>

class CuacsData{
public:
    void        addAnimal(Animal*);
    bool        findUsername(QString);
    void        addUsername(QString);
    AnimalList& getAnimals();
private:
    AnimalList animals;
    std::vector<QString> staffUsernames;
};
#endif // CUACSDATA_H
