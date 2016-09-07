/*********************************************************************

** Author: Mike Peters

** Date: 09/29/2015

** Description: Functions for the simulation of a loaded die

*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LoadedDie.hpp"

using namespace std;

//set default sides and total to 0
LoadedDie::LoadedDie()
{
	total = 0;
	x = 0;
}

//function to set the number of sides on loaded die
void LoadedDie::setSides(int y)
{
	x = y;
}

//function to return number of sides on loaded die (used for testing only)
int LoadedDie::getSides()
{
	return x;
}

//function to simulate a roll of a loaded die. Value is doubled if it does not
//exceed the number of sides
void LoadedDie::roll()
{	die = rand() % x + 1;
	if (die * 2 <= x)
	{
	       cout << die * 2 <<endl;
	       total = total + (die * 2);
	}
	else
	{	
		cout << die << endl;
		total = total + die;
	}
}

//function to return total of all the loaded die rolls
int LoadedDie::getTotal()
{
	return total;
}

