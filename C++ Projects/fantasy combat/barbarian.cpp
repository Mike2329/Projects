/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character barbarian definitions

*********************************************************************/

#include "character.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//set strength and armor
barbarian::barbarian()
{
	setArmor(0);
	setStrength(12);
}

//roll die and return attack value
int barbarian::Attack()
{
	int sum = 0;
	for(int i = 0; i < 2; i++)
	{
		sum += rand() % 6 + 1;
	}
	return sum;
}

//roll die and return defense value (armor included)
int barbarian::Defense()
{
	int sum = 0;
	for(int i = 0; i < 2; i++)
	{
		sum += rand() % 6 + 1;
	}
	return sum + armor;
}
