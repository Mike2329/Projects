/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character definitions

*********************************************************************/
#include "character.hpp"
#include <iostream>
using namespace std;

//default test values
creature::creature()
{
	armor = 22;
	strength = 24;
}

//used for testing
double creature::display()
{
	return armor;

}

//function to set armor
void creature::setArmor(int a)
{
	armor = a;
}

//function to set strength
void creature::setStrength(int s)
{
	strength = s;
}

//function to get armor
int creature::getArmor()
{
	return armor;
}

//function to get strength
int creature::getStrength()
{
	return strength;
}

