/*********************************************************************

** Author: Mike Peters

** Date: 07/17/2015

** Description: a function to calulate distance an object falls due to gravity in a specific time period

********************************************************************** 
#include <iostream>
using namespace std;

double fallDistance(double);


// call the fucntion thru main
int main()
{
	double value;

	cout << "enter a value to pass" << endl;   //ask for value that will be passed thru function
	cin >> value;
	cout << fallDistance(value) << endl;  //return value from function

    return 0;
}
*/

double fallDistance(double time2)
{
	return (time2 * time2) * (9.8) * (1.0 / 2.0);

}

