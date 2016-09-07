/*********************************************************************

** Author: Mike Peters

** Date: 10/25/2015

** Description: Item class definitions

*********************************************************************/

#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;

//Default
Item::Item(){
       name = "";
       unit = "";
       num = 0;
       unit_price = 0;
}

//Function to receive input from user about item
//Note: still getting used to "this->" and feel I may have been a bit redundant
Item::Item(string name, string unit, int num, double price){
       this->name = name;
       this->unit = unit;
       this->num = num;
       this->unit_price = price;
}

//set item name function
void Item::setname(string name){
       this->name = name;
}

//set unti (can, box, pound, ounces) function
void Item::setUnit(string unit){
       this->unit = unit;
}

//set number or quatity of the item function
void Item::setNumbers(int num){
       this->num = num;
}

//set unit price
void Item::setUnitPrice(double price){
       this->unit_price = price;
}

//returns item name
string Item::getName(){
       return name;
}

//return type of unit (can, box, pound, ounce)
string Item::getUnit(){
       return unit;
}

//return number or quantity
int Item::getNumbers(){
       return num;
}

//return unit price of item
double Item::getUnitPrice(){
       return unit_price;
}
