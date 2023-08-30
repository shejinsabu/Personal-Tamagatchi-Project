#include <fstream>
#include "petPug.h"

petPug::petPug() : basePet(0,0,0)
{
  fitnessLevel = 0;
}

petPug::petPug(int _happinessLevel, int _angerLevel, int _hungerLevel, int _fitnessLevel) : basePet(_happinessLevel, _angerLevel, _hungerLevel){
  fitnessLevel = _fitnessLevel;
}

void petPug::interact(){
    if(angerLevel <= 80){
      angerLevel -= 20;
    }
    else{
      angerLevel = 100;
    }
    if(happinessLevel <= 95){
      happinessLevel += 5;
    }
    else{
      happinessLevel = 100;
    }
    if(hungerLevel <= 70){
      hungerLevel += 30;
    }
    else{
      hungerLevel = 100;
    }
    cout << endl;
    cout << "You gave " << petName << " a stuffed doll to play with. " << petName << " played with the stuffed doll all day." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Fitness Level: " << fitnessLevel << endl;
    if(angerLevel >= 80){
      cout << petName << " is angry. You have ignored " << petName << "." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(angerLevel >= 60){
      cout << petName << " is not happy. You should play with " << petName << "." << endl;
    }
    if(hungerLevel >= 80){
      cout << petName << " is starving. You have neglected " << petName << "'s health." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(hungerLevel >= 60){
      cout << petName << " is hungry. You should feed " << petName << " some food." << endl;
    }
  }
 
void petPug::feed(){
    if(happinessLevel <= 95){
      happinessLevel += 5;
    }
    else{
      happinessLevel = 100;
    }
    if(hungerLevel >= 30){
      hungerLevel -= 30;
    }
    else{
      hungerLevel = 0;
    }
    cout << endl;
    cout << "You fed " << petName << " steak flavored treats. " << petName << " is very happy with your meal choice." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Fitness Level: " << fitnessLevel << endl;
    if(angerLevel >= 80){
      cout << petName << " is angry. You have ignored " << petName << "." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(angerLevel >= 60){
      cout << petName << " is not happy. You should play with " << petName << "." << endl;
    }
    if(hungerLevel >= 80){
      cout << petName << " is starving. You have neglected " << petName << "'s health." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(hungerLevel >= 60){
      cout << petName << " is hungry. You should feed " << petName << " some food." << endl;
    }
  }
  
 
void petPug::ignorePet(){
    if(happinessLevel >= 30){
      happinessLevel -= 30;
    }
    else{
      happinessLevel = 0;
    }
    cout << endl;
    cout << "You ignored " << petName << " for ruining the plants in your new garden. " << petName << "thinks it wasn't that big of a deal." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Fitness Level: " << fitnessLevel << endl;
    if(angerLevel >= 80){
      cout << petName << " is angry. You have ignored " << petName << "." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(angerLevel >= 60){
      cout << petName << " is not happy. You should play with " << petName << "." << endl;
    }
    if(hungerLevel >= 80){
      cout << petName << " is starving. You have neglected " << petName << "'s health." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(hungerLevel >= 60){
      cout << petName << " is hungry. You should feed " << petName << " some food." << endl;
    }
  }

 
void petPug::walk(){
    if(angerLevel <= 85){
      angerLevel += 15;
    }
    else{
      angerLevel = 100;
    }
    if(fitnessLevel <= 95){
      fitnessLevel += 5;
    }
    else{
      fitnessLevel = 100;
    }
    if(hungerLevel <= 90){
      hungerLevel += 10;
    }
    else{
      hungerLevel = 100;
    }
    cout << endl;
    cout << "You walked " << petName << "." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Fitness Level: " << fitnessLevel << endl;
    if(angerLevel >= 80){
      cout << petName << " is angry. You have ignored " << petName << "." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(angerLevel >= 60){
      cout << petName << " is not happy. You should play with " << petName << "." << endl;
    }
    if(hungerLevel >= 80){
      cout << petName << " is starving. You have neglected " << petName << "'s health." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(hungerLevel >= 60){
      cout << petName << " is hungry. You should feed " << petName << " some food." << endl;
    }
  }
  
 
void petPug::nextCoupleHours(){
    if(angerLevel >= 30){
      angerLevel -= 30;
    }
    else{
      angerLevel = 0;
    }
    if(happinessLevel <= 95){
      happinessLevel += 5;
    }
    else{
      happinessLevel = 100;
    }
    if(hungerLevel <= 85){
      hungerLevel += 15;
    }
    else{
      hungerLevel = 100;
    }
    cout << endl;
    cout << petName << " had a great nap." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Fitness Level: " << fitnessLevel << endl;
    if(angerLevel >= 80){
      cout << petName << " is angry. You have ignored " << petName << "." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(angerLevel >= 60){
      cout << petName << " is not happy. You should play with " << petName << "." << endl;
    }
    if(hungerLevel >= 80){
      cout << petName << " is starving. You have neglected " << petName << "'s health." << endl;
      if(happinessLevel >= 30){
        happinessLevel -= 30;      
      }
      else{
        happinessLevel = 0;
      }
      cout << "New Happiness Level: " << happinessLevel << endl;
    }
    else if(hungerLevel >= 60){
      cout << petName << " is hungry. You should feed " << petName << " some food." << endl;
    }
  }
 
int petPug::getfitnessLevel(){
  return fitnessLevel;
}
 
void petPug::setfitnessLevel(int _fitnessLevel){
  fitnessLevel = _fitnessLevel;
}
 
void petPug::saveData(string fileName){
  ofstream fout(fileName);
  fout << "bunny\n";
  fout << petName << "\n";
  fout << happinessLevel << "\n";
  fout << angerLevel << "\n";
  fout << hungerLevel << "\n";
  fout << fitnessLevel << "\n";
  fout.close();
}
 
void petPug::getData(string fileName){
  string type;
  string _name;
  int _happinessLevel;
  int _angerLevel;
  int _hungerLevel;
  int _fitnessLevel;
  ifstream fin(fileName);
  if(!fin.is_open()){
    cout << "Pet not found, please enter fileName again." << endl;
  }
  else{
    getline(fin, type);
    getline(fin, _name);
    fin >> _happinessLevel;
    fin >> _angerLevel;
    fin >> _hungerLevel;
    fin >> _fitnessLevel;
    fin.close();
    setName(_name);
    sethappinessLevel(_happinessLevel);
    setangerLevel(_angerLevel);
    sethungerLevel(_hungerLevel);
    setfitnessLevel(_fitnessLevel);
    cout << "Current Happiness Level: " << happinessLevel << endl;
    cout << "Current Hunger Level: " << hungerLevel << endl;
    cout << "Current Anger Level: " << angerLevel << endl;
    cout << "Current Fitness Level: " << fitnessLevel << endl;
  }
}
