/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character The Shadow definitions

*********************************************************************/
#include "character.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//set armor and strength
shadow::shadow()
{
	setArmor(0);
	setStrength(12);
}

//roll die and return attack value
int shadow::Attack()
{
	int sum = 0;
	for(int i = 0; i < 2; i++)
	{
		sum += rand() % 10 + 1;
	}
	return sum;
}

//roll die and return defense value (includes armor)
//creates 50/50 chance no damge taken by The Shadow
int shadow::Defense()
{
	int sum = 0;
	for(int i = 0; i < 1; i++)
	{
		sum += rand() % 6 + 1;
	}
	if (rand() % 2 + 1 == 1)
		return sum + armor;
	else
		return 100;
}
