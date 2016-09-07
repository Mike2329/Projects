/*********************************************************************

** Author: Mike Peters

** Date: 07/04/2015

** Description: convert celcius to fahrenheit

*********************************************************************/ 
#include <iostream>
using namespace std;

// a simple temperature coverting program program
int main()
{
	float celsius,
	      fahrenheit;

	//ask for celsius temerature
	cout << "Please enter a Celsius temperature.\n";
	cin >> celsius;

	//caculate fahrenheit
	fahrenheit = ((9.0 / 5.0) * celsius) + 32;

	//display fahrenheit
	cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheit << "\n";

    return 0;
}
