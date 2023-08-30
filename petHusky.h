#ifndef petHusky_H
#define petHusky_H

#include "basePet.h"

class petHusky : public basePet {
protected:
   int skillLevel;
public:
  petHusky();
  petHusky(int, int, int, int);
  void interact();
  void feed();
  void ignorePet();
  void train();
  void nextCoupleHours();
  int getskillLevel();
  void setskillLevel(int);
  void saveData(string);
  void getData(string);
};

#endif