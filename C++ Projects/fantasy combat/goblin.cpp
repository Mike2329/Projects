/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character goblin definitions

*********************************************************************/
#include "character.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//set armor and strength
goblin::goblin()
{
	setArmor(3);
	setStrength(8);

}

//roll die and return attack value
int goblin::Attack()
{
	int sum = 0;
	for(int i = 0; i < 2; i++){
		sum += rand() % 6 + 1;
	}
	return sum;
}

//roll die and return defense value (includes armor)
int goblin::Defense()
{
	int sum = rand() % 6 + 1;
	return sum + armor;
}
