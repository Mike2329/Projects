/*********************************************************************

** Author: Mike Peters

** Date: 07/04/2015

** Description: show fewest number of coins for given cents (0-99)

*********************************************************************/ 
#include <iostream>
using namespace std;

// Fewest coins to make user entered cents 0-99
int main()
{
	int cents, //user entered amount
	    q, //quarters
	    d, //dimes
	    n, //nickles
	    p; //pennies

	cout << "Please enter an amount in cents less than a dollar.\n"; //ask for amount
	cin >> cents;


	//formulas for determining number of each coin
	q = cents / 25; 
	d = (cents % 25) / 10;
	n = (cents % 25) % 10 / 5;
       	p = (cents % 25) % 10 % 5;


	//output
	cout << "Your change will be:\n"; 
	cout << "Q: " << q << "\n";
	cout << "D: " << d << "\n";
	cout << "N: " << n << "\n";
	cout << "P: " << p << "\n";

		
    return 0;
}
