#include <fstream>
#include "petHusky.h"

petHusky::petHusky() : basePet(0,0,0)
{
  skillLevel = 0;
}

petHusky::petHusky(int _happinessLevel, int _angerLevel, int _hungerLevel, int _skillLevel) : basePet(_happinessLevel, _angerLevel, _hungerLevel){
  skillLevel = _skillLevel;
}

void petHusky::interact(){
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
    cout << "You gave " << petName << " a toy ball to play with. " << petName << " played with the toy ball all day." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Skill Level: " << skillLevel << endl;
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
 
void petHusky::feed(){
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
    cout << "You fed " << petName << " beef flavored treats. " << petName << " is very happy with your meal choice." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Skill Level: " << skillLevel << endl;
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
  
 
void petHusky::ignorePet(){
    if(happinessLevel >= 30){
      happinessLevel -= 30;
    }
    else{
      happinessLevel = 0;
    }
    cout << endl;
    cout << "You ignored " << petName << " for peeing in the house. " << petName << " thinks you are overreacting." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Skill Level: " << skillLevel << endl;
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

 
void petHusky::train(){
    if(angerLevel <= 85){
      angerLevel += 15;
    }
    else{
      angerLevel = 100;
    }
    if(skillLevel <= 95){
      skillLevel += 5;
    }
    else{
      skillLevel = 100;
    }
    if(hungerLevel <= 90){
      hungerLevel += 10;
    }
    else{
      hungerLevel = 100;
    }
    cout << endl;
    cout << "You trained " << petName << "." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Skill Level: " << skillLevel << endl;
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

 
void petHusky::nextCoupleHours(){
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
    cout << "New Skill Level: " << skillLevel << endl;
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
 
int petHusky::getskillLevel(){
  return skillLevel;
}
 
void petHusky::setskillLevel(int _skillLevel){
  skillLevel = _skillLevel;
}
 
void petHusky::saveData(string fileName){
  ofstream fout(fileName);
  fout << "bunny\n";
  fout << petName << "\n";
  fout << happinessLevel << "\n";
  fout << angerLevel << "\n";
  fout << hungerLevel << "\n";
  fout << skillLevel << "\n";
  fout.close();
}
 
void petHusky::getData(string fileName){
  string type;
  string _name;
  int _happinessLevel;
  int _angerLevel;
  int _hungerLevel;
  int _skillLevel;
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
    fin >> _skillLevel;
    fin.close();
    setName(_name);
    sethappinessLevel(_happinessLevel);
    setangerLevel(_angerLevel);
    sethungerLevel(_hungerLevel);
    setskillLevel(_skillLevel);
    cout << "Current Happiness Level: " << happinessLevel << endl;
    cout << "Current Hunger Level: " << hungerLevel << endl;
    cout << "Current Anger Level: " << angerLevel << endl;
    cout << "Current Skill Level: " << skillLevel << endl;
  }
}
