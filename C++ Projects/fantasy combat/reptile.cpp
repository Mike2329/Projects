/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character reptile people definitions

*********************************************************************/
#include "character.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//set armor and strength
reptile::reptile()
{
	setArmor(7);
	setStrength(18);
}

//roll die and return attack value
int reptile::Attack()
{
	int sum = 0;
	for(int i = 0; i < 3; i++){
		sum += rand() % 6 + 1;
	}
	return sum;
}

//roll die and return defense value (include armor)
int reptile::Defense()
{
	int sum = rand() % 6 + 1;
	return sum + armor;
}
