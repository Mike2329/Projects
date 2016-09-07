/*********************************************************************

** Author: Mike Peters

** Date: 08/07/2015

** Description: ShoppingCart header file to declare variables and functions
for ShoppingCart.cpp

*********************************************************************/

#include <string>
#include <iostream>
#include "Item.hpp"
using namespace std;

class ShoppingCart
{
private:
	Item *items[100]; //declare 100 items of pointers
  	int arrayEnd;//for end of array
public:
	ShoppingCart();
	void addItem(Item *tItem);
	double totalPrice();
};
