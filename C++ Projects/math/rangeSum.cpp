/*********************************************************************

** Author: Mike Peters

** Date: 07/10/2015

** Description: a program that gives the sum of a range of numbers

*********************************************************************/ 
#include <iostream>
using namespace std;

// the sum of a range
int main()
{
	int number1,
	    number2,
	    max,
	    min,
	    total = 0;
	
	//collect two integers
	cout << "Please enter two integers." << endl;
	cin >> number1 >> number2;
	
	//determine which is min and max integer
	if (number1 > number2)
	{
		max = number1;
		min = number2;
	}	
	else
	{
		max = number2;
		min = number1;
	}   	

	//loop to calculate total
	for (min; min <= max; min++)
	{
		total += min;
	}	

	cout << "The sum of the values in that range is:" << endl << total << endl;

    return 0;
}
