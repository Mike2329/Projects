/*********************************************************************

** Author: Mike Peters

** Date: 10/22/2015

** Description: Main function. Contains menu for 3 functions. 

*********************************************************************/

#include<iostream>
#include "Tri.hpp"
#include "Array.hpp"
#include "String.hpp"
using namespace std;

int main()
{
	int option = 0;
	int rows = 0;

	//Create class objects
	Tri t; 
	Array b; 
	Rev r;

	//Menu to offer user choices of functions to run
	cout << "Choose the function to run:" << endl;
	cout << "Enter 1 for reverse string function" << endl;
	cout << "Enter 2 for array sum function" << endl;
	cout << "Enter 3 for triangualr function" << endl;
	cout << "Enter 4 to exit program" << endl;
	cin >> option;

	//User inputs string, output is that string backwards
	if(option == 1)
	{
		string str;
		cout << "Enter String" << endl;
		cin >> str;

		string rev_str = r.Reverse(str);

		cout << "Your backward string is: " << rev_str << endl;
		main();
	}

	//User inputs array size and values. Output is sum of those elements.
	else if(option == 2) 
	{
		cout << "Enter Array Size:";
     		int ArrSize;
		cin >> ArrSize;
		int *arrayValue = new int [ArrSize];

		cout << "Enter elements sperated by a space: ";
		
		for (int a = 0; a < ArrSize; a++)
			cin>> *(arrayValue+a);

		cout << "Sum of the array is: " << b.RecursiveSum(arrayValue,ArrSize) << endl;
		main();
	}

	//User inputs how many rows in a triangle. Output is total number of "pins."
	else if(option == 3)
	{
		cout << "How many rows are in the triangle?" << endl;
		cin >> rows;
		cout<<"The total number for "<<rows<<" rows is : " << t.Sum(rows) << endl;
		main();
	}
	

return 0;

}

