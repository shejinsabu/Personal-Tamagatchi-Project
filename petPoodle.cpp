#include <fstream>
#include "petPoodle.h"

petPoodle::petPoodle() : basePet(0,0,0)
{
  intelligenceLevel = 0;
}

petPoodle::petPoodle(int _happinessLevel, int _angerLevel, int _hungerLevel, int _intelligenceLevel) : basePet(_happinessLevel, _angerLevel, _hungerLevel){
  intelligenceLevel = _intelligenceLevel;
}

void petPoodle::interact(){
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
    cout << "You gave " << petName << " a chew toy to play with. " << petName << " played with the chew toy all day." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Intelligence Level: " << intelligenceLevel << endl;
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
 
void petPoodle::feed(){
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
    cout << "You fed " << petName << " chicken flavored treats. " << petName << " is very happy with your meal choice." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Intelligence Level: " << intelligenceLevel << endl;
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
  
 
void petPoodle::ignorePet(){
    if(happinessLevel >= 30){
      happinessLevel -= 30;
    }
    else{
      happinessLevel = 0;
    }
    cout << endl;
    cout << "You ignored " << petName << " for breaking an expensive glass bowl. " << petName << " thinks it didn't look good in the first place." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Intelligence Level: " << intelligenceLevel << endl;
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

 
void petPoodle::read(){
    if(angerLevel <= 85){
      angerLevel += 15;
    }
    else{
      angerLevel = 100;
    }
    if(intelligenceLevel <= 95){
      intelligenceLevel += 5;
    }
    else{
      intelligenceLevel = 100;
    }
    if(hungerLevel <= 90){
      hungerLevel += 10;
    }
    else{
      hungerLevel = 100;
    }
    cout << endl;
    cout << "You read a book to " << petName << "." << endl;
    cout << "New Happiness Level: " << happinessLevel << endl;
    cout << "New Hunger Level: " << hungerLevel << endl;
    cout << "New Anger Level: " << angerLevel << endl;
    cout << "New Intelligence Level: " << intelligenceLevel << endl;
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

 
void petPoodle::nextCoupleHours(){
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
    cout << "New Intelligence Level: " << intelligenceLevel << endl;
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
 
int petPoodle::getintelligenceLevel(){
  return intelligenceLevel;
}
 
void petPoodle::setintelligenceLevel(int _intelligenceLevel){
  intelligenceLevel = _intelligenceLevel;
}
 
void petPoodle::saveData(string fileName){
  ofstream fout(fileName);
  fout << "bunny\n";
  fout << petName << "\n";
  fout << happinessLevel << "\n";
  fout << angerLevel << "\n";
  fout << hungerLevel << "\n";
  fout << intelligenceLevel << "\n";
  fout.close();
}
 
void petPoodle::getData(string fileName){
  string type;
  string _name;
  int _happinessLevel;
  int _angerLevel;
  int _hungerLevel;
  int _intelligenceLevel;
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
    fin >> _intelligenceLevel;
    fin.close();
    setName(_name);
    sethappinessLevel(_happinessLevel);
    setangerLevel(_angerLevel);
    sethungerLevel(_hungerLevel);
    setintelligenceLevel(_intelligenceLevel);
    cout << "Current Happiness Level: " << happinessLevel << endl;
    cout << "Current Hunger Level: " << hungerLevel << endl;
    cout << "Current Anger Level: " << angerLevel << endl;
    cout << "Current Intelligence Level: " << intelligenceLevel << endl;
  }
}

