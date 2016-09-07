/*********************************************************************

** Author: Mike Peters

** Date: 09/29/2015

** Description: Functions for normal die

*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.hpp"

using namespace std;

//set default total and sides to 0
Die::Die()
{
	x = 0;
	total = 0;
}

//function to set number of sides on regular die
void Die::setSides(int y)
{
	x = y;
}

//function to return number of sides picked by user (used for testing)
int Die::getSides()
{
	return x;
}

//function to simulate roll of regular die
void Die::roll()
{	die = rand() % x + 1;
	cout << die;
	total = total + die;
}

//function to return total of all regular die rolls
int Die::getTotal()
{
	return total;
}

