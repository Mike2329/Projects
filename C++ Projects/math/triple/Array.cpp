/*********************************************************************

** Author: Mike Peters

** Date: 10/22/2015

** Description: Array sum class definitions

*********************************************************************/

#include <iostream>
#include <string>
#include "Array.hpp"
using namespace std;

Array::Array(){
}

//Takes in size of array and values, then returns the sum
int Array::RecursiveSum(int arrayValue[], int counterVal){

	if (counterVal == 1)
	return arrayValue[0];

     	else
     	{
	     return arrayValue[0] + RecursiveSum(arrayValue+1,counterVal-1);
	}

}
