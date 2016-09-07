/*********************************************************************

** Author: Mike Peters

** Date: 07/17/2015

** Description: a function to sort their values into ascending order

**********************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

//prototype
void smallSort(int &, int &, int &);

// call the fucntion thru main
int main()
{
	int a, 
	    b, 
	    c;

	cout << "enter a 3 values to pass" << endl;   //ask for values that will be passed thru function
	cin >> a >> b >> c;
	smallSort(a, b, c);
	cout << a << ", " << b << ", " << c << endl;

    return 0;
}
*/

void smallSort (int &a, int &b, int &c)
{
	if (a <= b && b <= c)  //a, b, c order
	{
	}
	
	if (a <= c && c <= b)  //a, c, b order
	{	
		int temp;
		temp = b;
		b = c;
		c = temp;	
	}

	if (b <= a && a <= c)  //b, a, c order
	{	
		int temp;
		temp = a;
		a = b;
		b = temp;	
	}	

	if (b <= c && c <= a)  //b, c, a order
	{	
		int temp;
		temp = a;
		a = b;
		b = c; 
		c = temp;
	}	


	if (c <= a && a <= b)  //c, a, b order
	{	
		int temp;
		temp = a;
		a = c;
		c = b;
		b = temp;
	}	

	if (c <= b && b <= a)  //c, b, a order
	{	
		int temp;
		temp = a;
		a = c;
		c = temp;	
	}		
}
