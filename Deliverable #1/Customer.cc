#include <iostream>
using namespace std;
#include <string>

#include "Customer.h"

int Customer::nextId = 1000;
Customer::Customer(string n, string a, string o){
  name = n;
  age = a;
  address = o;
  id = nextID++;

}

Customer::~Customer(){

}

int Customer::getID(){
  return (id);
}

sting Customer::getCustomerName(){
  return (name);
}

string Customer::getCustomerAge(){
  return (age);
}

string Customer::getAddress(){
  return (address);
}

CustomerType& Customer::getCustomers(){
  return (Customers);
}

int Customer::addCustomers(Customer* Customer){
  return Customers.add(Customer);
}
