/*********************************************************************

** Author: Mike Peters

** Date: 07/04/2015

** Description: ask for 5 numbers and display their average

*********************************************************************/ 
#include <iostream>
using namespace std;

// a simple average of numbers program
int main()
{
    double number1,	//1st number
	   number2,	//2nd number
	   number3, //3rd number
	   number4,	//4th number
   	   number5,	//5th number 
  	   average;	//average of 5 user numbers

    //ask for 5 numbers from user
    cout << "Please enter five numbers.\n"; 
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    
    //calculate and displaay average
    average = (number1 + number2 + number3 + number4 + number5) / 5;
    cout << "The average of those numbers is:\n" << average << "\n";

    return 0;
}
