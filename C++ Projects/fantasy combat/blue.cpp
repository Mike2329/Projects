/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character blue people definitions

*********************************************************************/
#include "character.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//set armor and strength
blue::blue()
{
	setArmor(3);
	setStrength(12);
}

//roll die and return attack value
int blue::Attack()
{
	int sum = 0;
	for(int i = 0; i < 2; i++)
	{
		sum += rand() % 10 + 1;
	}
	return sum;
}

//roll die and return defense value (includes armor)
int blue::Defense()
{
	int sum = 0;
	for(int i = 0; i < 3; i++)
	{
		sum += rand() % 6 + 1;
	}
	return sum + armor;
}
