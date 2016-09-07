/*********************************************************************

** Author: Mike Peters

** Date: 10/22/2015

** Description: Reverse string class definitions

*********************************************************************/

#include <iostream>
#include <string>
#include "String.hpp"
using namespace std;

Rev::Rev(){

}

string Rev::Reverse(string str)
{
	string reverse_str = "";
	if (str.length() <= 1)
	return str;

	string str_cpy = str;
	n = str_cpy.length() - 1;

	string first_letter = str_cpy.substr(0, 1);

	str_cpy = str_cpy.substr(1, n);
	reverse_str += Reverse(str_cpy);
	reverse_str += first_letter;

	return reverse_str;
}

