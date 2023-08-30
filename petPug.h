#ifndef petPug_H
#define petPug_H

#include "basePet.h"


class petPug : public basePet {
protected:
   int fitnessLevel;
public:
  petPug();
  petPug(int, int, int, int);
  void interact();
  void feed();
  void ignorePet();
  void walk();
  void nextCoupleHours();
  int getfitnessLevel();
  void setfitnessLevel(int);
  void saveData(string);
  void getData(string);
};

#endif