#include <iostream>
using namespace std;
#include <string>

#include "Customer.h"

Customer::Customer(string n, string a ){
  name = n;
  age = a;
  id = nextID++;

}

Customer::~Customer(){

}

int Customer::getID(){
  return id;
}

sting Customer::getCustomerName(){
  return name;
}

string Customer::getCustomerAge(){
  return age;
}

CustomerType& Customer::getCustomers(){
  return Customers;
}

int Customer::addCustomers(Customer* Customer){
  return Customers.add(Customer);
}
