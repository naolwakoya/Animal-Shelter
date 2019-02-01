#include <iostream>
#include <string>
#include "ShopController.h"

ShopController::ShopController(){
  initCustomers();
}

void ShopController::launch(){
  int choice;

  while(1){
    choice = -1;
    view.mainMenu(choice);

    if(choice == 1){
      view.printCustomers(mechnicShop.getCustomers());
      view.pause();
    }else{
      break;
    }
  }
}

void ShopController::initCustomers(){
  //adding data in here

  Customer* newCustomerArray1;
  Customer* newCustomerArray2;
  Customer* newCustomerArray3;
  Customer* newCustomerArray4;
  Customer* newCustomerArray5;
  Customer* newCustomerArray6;
  Customer* newCustomerArray7;
  Customer* newCustomerArray8;

  newCustomerArray1 = new Customer("Maurice","Maurice","2600 Colonel By Dr.","(613)728-9568");
  //Vehicle* ford_fiesta = new Vehicle("Ford","Fiesta","Red",2007,100000);
  // newCustomerArray1 -> addVehicle(ford_fiesta);
  // mechanicShop.addCustomer(newCustomerArray1);
}
