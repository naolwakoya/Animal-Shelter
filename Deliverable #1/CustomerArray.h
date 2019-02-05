#ifndef CUSTOMERARRAY_H
#define CUSTOMERARRAY_H

class CustomerArray{
public:
  CustomerArray();
  ~CustomerArray();
  int addCustomer(Customer*);
  int getSize();
  Anim* get(int);

private:
  Customer elements[MAX_CUSTOMER];
  int size;

};

#endif
