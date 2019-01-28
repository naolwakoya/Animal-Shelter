#ifndef DOG_H
#define DOG_H

class Dog {
public:
  Dog(string = "");
  virtual ~Dog();

private:
  virtual void initHealth();

};

#endif
