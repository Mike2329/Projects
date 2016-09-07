0/*********************************************************************

** Author: Mike Peters

** Date: 07/10/2015

** Description: a program that gives the min and max numbers from list from user

*********************************************************************/ 
#include <iostream>
using namespace std;

// the sum of a range
int main()
{
	int min,    
	    max,
	    number,
	    integer;

	//ask for number of integers, set value of first integer as both min and max
	cout << "How many integers would you like to enter?" << endl;   
	cin >> number;
	cout << "Please enter " << number << " integers." << endl;
	cin >> integer;
	max = integer;
	min = integer;
	
	//loop that determines min and max values
	for (int start = 1; start < number; start++)
	{
		cin >> integer;
		if (integer > max)
			max = integer;
		else if (integer < min)
			min = integer;
	}

	//display min and max values
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

    return 0;
}
