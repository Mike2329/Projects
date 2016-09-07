/*********************************************************************

** Author: Mike Peters

** Date: 08/15/2015

** Description: Book class definitions.  

*********************************************************************/

#include <iostream>
#include "Book.hpp"
#include <string>
using namespace std;


Book::Book(string idc, string t, string a)
{
	idCode = idc;
	title = t;
	author = a;
	location = ON_SHELF;
}

//Returns book Id code
string Book::getIdCode()
{
	return idCode;
}

//Returns book title
string Book::getTitle()
{
	return title;
}

//Returns book author
string Book::getAuthor()
{
	return author;
}

//Returns book location
Locale Book::getLocation()
{
	return location;
}

//Set book location
void Book::setLocation(Locale lo1)
{
	location = lo1;
}

//Returns who checked out book
Patron* Book::getCheckedOutBy()
{
	return checkedOutBy;
}

//Set who checked out book
void Book::setCheckedOutBy(Patron* p1)
{
	checkedOutBy = p1;
}

//Returns who requested book
Patron* Book::getRequestedBy()
{
	return requestedBy;
}

//Set who book is requested by
void Book::setRequestedBy(Patron* p1)
{
	requestedBy = p1;
}

//Returns date book is checked out
int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}

//Sets date book is checked out
void Book::setDateCheckedOut(int d1)
{
	dateCheckedOut = d1;
}
