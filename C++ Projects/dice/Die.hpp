/*********************************************************************

** Author: Mike Peters

** Date: 09/29/2015

** Description: function and variable declarations for regualr die class

*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die
{
private:
	int x; //set value for number of sides on die
	int y; //number of sides on die picked by user
	int die; //value of die when rolled
	int total; //total of all die rolls
public:
	Die();
	void setSides(int); //function to set number sides on die
	int getSides(); //function to return sides on die (uesd for testing)
	void roll(); //function to roll die
	int getTotal(); //function to return total of all rolls
};


