/*********************************************************************

** Author: Mike Peters

** Date: 10/22/2015

** Description: Triangular class declarations

*********************************************************************/

#include <iostream>
#include <string>
#include "Tri.hpp"
using namespace std;

Tri::Tri(){
}

//Takes in number of rows and returns sum
int Tri::Sum(int rows){
	i=0;
	if(rows>0)
	i=Sum(rows-1);
	return rows+i;
	
}
