#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
public:
  Animal(string = "unknown");
  virtual ~Animal();
  string getName();
  string getStatus();
  virtual void healthStatus;

protected:
  string health[MAX_MOVES];
  int goodHealth;
  virtual void initMoves() = 0;

private:
  string name;
  string status;
  virtual string healthStatus();

};

#endif
