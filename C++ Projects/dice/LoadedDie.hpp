/*********************************************************************

** Author: Mike Peters

** Date: 09/29/2015

** Description: Function and variable declarations for loaded die class

*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class LoadedDie
{
private:
	int x; //set value for sides on die
	int y; //number of die sides sent by user
	int die; //value of die when rolled
	int total; //total value of die rolls
public:
	LoadedDie();
	void setSides(int); //function to set number of sides on die
	int getSides(); //function to return sides on die (used for testing)
	void roll(); //function to roll die
	int getTotal(); //fuction to return total of all rolls  
};


