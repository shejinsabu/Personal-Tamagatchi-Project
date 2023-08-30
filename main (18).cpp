#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include "petHusky.h"
#include "petPoodle.h"
#include "petPug.h"

int main() {
  petHusky p(60, 70, 80, 10);
  string name;
  cin >> name;
  p.setName(name);
  p.nextCoupleHours();
  p.feed();
  p.train();
  p.ignorePet();
  p.interact();
  string fileName;
  cin >> fileName;
  p.saveData(fileName);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  p.getData(fileName);
}