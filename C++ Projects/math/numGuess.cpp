/*********************************************************************

** Author: Mike Peters

** Date: 07/10/2015

** Description: a program that asks user for a number then has player guess it

*********************************************************************/ 
#include <iostream>
using namespace std;

// a guess the number program
int main()
{

	int number, guess, tries;    
	tries = 1;
	
	//get number to be guessed by player
	cout << "Enter the number for the player to guess." << endl;
	cin >> number;
	
	//ask for first guess
	cout << "Enter your guess." << endl;
	cin >> guess;
	
	//loop to keep asking for guesses until correct, and to keep track of the number of guesses
	while (number != guess)
	{
		
		if (guess > number)
		{
			cout << "Too high - try again." << endl;
			cin >> guess;
			tries=++tries;
		}
		else
		{	
			cout << "Too low - try again." << endl;
			cin >> guess;
			tries=++tries;	
		}

	}
	cout << "You guessed it in " << tries << " tries." << endl;
    return 0;
}
