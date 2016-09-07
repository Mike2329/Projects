/*********************************************************************

** Author: Mike Peters

** Date: 09/29/2015

** Description: Loaded Die program, main function prompts user for # of sides
the dice will have and how many times to roll them. Outputs the result of each
die on each throw and the total of each die at the end of all the rolls. 

*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.hpp"
#include "LoadedDie.hpp"

using namespace std;

int sides; //number of sides die has, entered by user
int rolls; //number of rolls of each de, entered by user
int i = 0; //used for loop that simulates the roll of dice

int main()
{
	cout << "How many sides will the dice have?" << endl;
	cin >> sides;
	cout << "How many times will we roll the dice?" << endl;
	cin >> rolls;
	cout << "You rolled a" << endl;
	
	//create and set number of sides on regular and loaded die
	Die die1;
	die1.setSides(sides);
	LoadedDie die2;
	die2.setSides(sides);

	/****Used for testing
	cout << "# of sides on die 1 = " << die1.getSides() << endl;
	cout << "# of sides on die 2 = " << die2.getSides() << endl;
	cout << "# of rolls = " << rolls << endl;
	****/


	//Random generator seed and time function to get seed
	int seed = time(0);
	srand(seed);
	
	//loop to simulate and print each roll
	while (i < rolls)
	{
		die1.roll();
		cout << " and ";
		die2.roll();
		i++;
	}

	//output of the summation of the rolls of each die
	cout << "total for die 1 is: " << die1.getTotal() << endl;
	cout << "total for die 2 is: " << die2.getTotal() << endl;


    return 0;
}
