#ifndef Customer_H
#define Customer_H

class Customer{
public:
  Customer(string, string);
  ~Customer();
  int getID();
  string getCustomerName();
  string getCustomerAge();
  int addCustomers(Customer*);
  CustomerType& getCustomers();

private:
  static int nextId;

  int id;
  string name;
  string age;


};

#endif
