/*********************************************************************

** Author: Mike Peters

** Date: 07/17/2015

** Description: a function to calculate the number of steps to reach 1

********************************************************************** 

#include <iostream>
using namespace std;

int hailstone(int);


// call the fucntion thru main
int main()
{
	int number;

	cout << "enter a value to pass" << endl;   //ask for value that will be passed thru function
	cin >> number;
	cout << hailstone(number) << " steps" << endl;

    return 0;
}
*/

int hailstone(int start)
{
	int steps = 0;
	if(start == 1)
	{
		return 0;
	}

	while(start != 1)
	{	
		if(start % 2 == 0)
		{
			start /= 2;
		//	cout << start << endl; //check sequence
			steps++;
		//	cout << steps << "steps" << endl; //check sequence
		}
		else if(start % 2 == 1 && start != 1)
		{
			start = (start * 3) + 1;
		//	cout << start << endl;  //check sequence
			steps++;
		//	cout << steps << "steps" << endl; //check sequence
		}
	}
	return steps;
}

