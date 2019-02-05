#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

#include "CustomerArray.h"

CustomerArray::CustomerArray(){
  size = 0;
}

CustomerArray::~CustomerArray() {
  for (int i = 0; i < size; i++){
    delete elements[i];
  }

}

int CustomerArray::addCustomer(Customer* newCustomer){
  if(size > MAX_CUSTOMER){
    return(C_NOK);
  }else{
    elements[size] = newCustomerArray;
    zize++;
    return(C_OK);
  }
}

int CustomerArray::getSize(){
  return size;
}

Anim* CustomerArray::get(int INDEX){
  return (elements[INDEX]);
}
