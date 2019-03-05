#include "DataModel/Cat.h"

Cat::Cat(int id, QString n, int a, QString s, QString c, int h, double w, QString b, bool claw)
    :Animal(id, n, a, s, c, h, w, b, CAT){
    declawed = claw;
}

bool Cat::isDeclawed(){return declawed;}
