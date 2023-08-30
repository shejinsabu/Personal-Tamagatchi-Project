#include "basePet.h"

basePet::basePet(){
  happinessLevel = 0;
  angerLevel = 0;
  hungerLevel = 0;
}

basePet::basePet(int _happinessLevel, int _angerLevel, int _hungerLevel){
  happinessLevel = _happinessLevel;
  angerLevel = _angerLevel;
  hungerLevel = _hungerLevel;
}
   
int basePet::gethappinessLevel(){
  return happinessLevel;
}
   
int basePet::getangerLevel(){
  return angerLevel;
}
   
int basePet::gethungerLevel(){
  return hungerLevel;
}
   
string basePet::getpetName(){
  return petName;
}
   
void basePet::sethappinessLevel(int _happinessLevel){
  happinessLevel = _happinessLevel;
}
   
void basePet::setangerLevel(int _angerLevel){
  angerLevel = _angerLevel;
}
   
void basePet::sethungerLevel(int _hungerLevel){
  hungerLevel = _hungerLevel;
}
   
void basePet::setName(string _petName){
  petName = _petName;
}
