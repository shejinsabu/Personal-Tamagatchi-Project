#ifndef basePet_H
#define basePet_H

#include <string>
#include <iostream>
using namespace std;

class basePet{
protected:
  int happinessLevel;
  int angerLevel;
  int hungerLevel;
  string petName;
public:
  basePet();
  basePet(int, int, int);
  int gethappinessLevel();
  int getangerLevel();
  int gethungerLevel();
  string getpetName();
  void sethappinessLevel(int);
  void setangerLevel(int);
  void sethungerLevel(int);
  void setName(string);
  virtual void nextCoupleHours() = 0;
  virtual void interact() = 0;
  virtual void feed() = 0;
  virtual void ignorePet() = 0;
  virtual void saveData(string) = 0;
  virtual void getData(string) = 0;
};

#endif
