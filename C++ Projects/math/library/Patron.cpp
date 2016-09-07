/*********************************************************************

** Author: Mike Peters

** Date: 08/15/2015

** Description: Patron class definitions.  

*********************************************************************/

#include "Patron.hpp"
#include <iostream>
#include <string>
using namespace std;


Patron::Patron(std::string idn, std::string n)
{
	idNum = idn;
	name = n;
}

//Returns Id number
string Patron::getIdNum()
{
	return idNum;
}

//Returns name
string Patron::getName()
{
	return name;
}
//Vector of books patron has checked out
vector<Book *> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}

//Adds book to those that are checked out by patron
void Patron::addBook(Book* b1)
{
	checkedOutBooks.push_back(b1);
}

//Removes book from those checked out
void Patron::removeBook(Book* b1)
{
	for(int k1 = 0; k1 < checkedOutBooks.size(); ++k1)
	{
		if(checkedOutBooks[k1] == b1)
   		{
			checkedOutBooks.erase(checkedOutBooks.begin() + k1);
			break;
		}
	}	
}

//Returns fine amount patron owes
double Patron::getFineAmount()
{
	return fineAmount;
}

//changes the fine amount patron owes
void Patron::amendFine(double amount)
{
	fineAmount += amount;
}
