#ifndef petPoodle_H
#define petPoodle_H

#include "basePet.h"

//Declare the derived class Circle below
class petPoodle : public basePet {
protected:
   int intelligenceLevel;
public:
  petPoodle();
  petPoodle(int, int, int, int);
  void interact();
  void feed();
  void ignorePet();
  void read();
  void nextCoupleHours();
  int getintelligenceLevel();
  void setintelligenceLevel(int);
  void saveData(string);
  void getData(string);
};

#endif
