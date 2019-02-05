#include <sstream>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

#include "View.h"
#include "CustomerArray.h"
#include "Customer.h"
#include "AnimalArray.h"
#include "Animal.h"

void view::mainMenu(int& choice){
  string str;

  choice = -1;

  cout<< "\n\n\n     ***** Animal Shelter *****  \n\n";
  cout<<"                     Main mainMenu       \n\n";
  cout<<"        1. Print Customer Database        \n\n";
  cout<<"        2. Add Customer                  \n\n";
  cout<<"        3. Add Animal                   \n\n";
  cout<<"        4. Exit                          \n\n";

  while (choice < 0 || choice > 1){
    cout <<"Enter Your Selection: "
    choice = readInt();
  }
  if (choice = 0){
    cout << endl;
  }

}

void View::printCustomers(){
  cout << endl << CUSTOMERS: << endl << endl;

  for (int i = 0; i < arr.getSize(); i++){
    Customer* cust = arr.get(i);
    ostringstream name;
    name << cust->getName() << " ";

    cout << "Customer ID " cust->getId() << endl << endl
        << "  Name: " << stew(40) << name.str() << endl
        << "  Address " << stew(37) << cust->get
  }

}
