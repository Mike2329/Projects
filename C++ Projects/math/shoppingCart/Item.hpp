/*********************************************************************

** Author: Mike Peters

** Date: 08/07/2015

** Description: Item header file to declare variables and functions
for Item.cpp

*********************************************************************/
#include <string>
#include <iostream>
using namespace std;

class Item
{
private:
   string name;
   double price;
   int quantity;
public:
   //get and set methods for Item names, Price, and Quantity
   void setName(string nm);
   string getName();
   void setPrice(double pr);
   double getPrice();
   void setQuantity(int qty);
   int getQuantity();

   Item(string nm, double pr, int qty); //constructor with parameters
   Item(); //default constructor

};

