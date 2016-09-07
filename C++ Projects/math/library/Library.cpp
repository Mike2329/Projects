/*********************************************************************

** Author: Mike Peters

** Date: 08/15/2015

** Description: Library class definitions.  

*********************************************************************/

#include "Library.hpp"
#include <iostream>
#include <string>
using namespace std;

//Default date to 0
Library::Library()
{
   currentDate=0;
}

//Adds book to holdings vector
void Library::addBook(Book* b1)
{
	holdings.push_back(b1);
}

//Adds patron to member vector
void Library::addPatron(Patron* p1)
{
	members.push_back(p1);
}


std::string Library::checkOutBook(std::string pID, std::string bID)
{	
	//Return if book is not in library
	Book* b1 = getBook(bID);
	if (b1 == NULL)
	return "BOOK NOT FOUND";
  	
	//Return if patron is not in library
	Patron* pa = getPatron(pID);
	if (pa == NULL)
	return "patron not found";
  
	//Return if book is already checked out
	Patron* p1a = b1->getCheckedOutBy();
	if (p1a != NULL)
	return "BOOK ALREADY CHECKED OUT";
  
	//Return if other patron has book on hold
	Patron* p2a = b1->getRequestedBy();
	if (p2a != NULL)
	return "BOOK ON HOLD BY OTHER PATRON";
  
	//Update chaeckout date, location, and checkedout by. Return sucessful checkout
	b1->setDateCheckedOut(currentDate);
	b1->setLocation(ON_HOLD_SHELF);
	b1->setCheckedOutBy(pa);
	pa->addBook(b1);
	return "CHECK OUT SUCCESSFUL";
}

/********************************************************
if the specified Book is not in the Library, return "book not found"
if the Book is not checked out, return "book already in library"
update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has requested it; update the Book's checkedOutBy; return "return successful"
Decription taken from Assignment 8 instructions
*********************************************************/
std::string Library::returnBook(std::string bID)
{
	Book* b1= getBook(bID);
	if (b1 == NULL)
	return "BOOK NOT FOUND";
  
	Patron* pa = b1->getCheckedOutBy();
	if (pa == NULL)
	return "ALREADY IN LIBRARY";
	pa->removeBook(b1);
  
	Patron* p1 = b1->getRequestedBy();
	if (p1 == NULL)
	b1->setLocation(ON_SHELF);
	else
	{
		b1->setDateCheckedOut(currentDate);
		b1->setLocation(CHECKED_OUT);
		b1->setCheckedOutBy(p1);
		p1->addBook(b1);
	}
	return "RETURN SUCCESSFUL";
}

/*************************************************************
if the specified Book is not in the Library, return "book not found"
if the specified Patron is not in the Library, return "patron not found"
if the specified Book is already requested by another Patron, return "book on hold by other patron" update the Book's requestedBy; if the Book is on the shelf, update its location to on hold; return "request successful"
Decritption taken from Assignment 8 instructions
*************************************************************/
std::string Library::requestBook(std::string pID, std::string bID)
{
	Book* b1 = getBook(bID);
	if (b1 == NULL)
	return "BOOK NOT FOUND";
  
	Patron* pa = getPatron(pID);
	if (pa == NULL)
	return "PATRON NOT FOUND";
  
	Patron* p1a = b1->getRequestedBy();
	if (p1a != NULL)
	return "BOOK ON HOLD BY OTHER PATRON";
  
	b1->setRequestedBy(p1a);
	b1->setLocation(ON_HOLD_SHELF);
	return "REQUEST SUCCESSFUL";
}

/************************************************************
takes as a parameter the amount that is being paid (not the negative of that amount) if the specified Patron is not in the Library, return "patron not found"
use amendFine to update the Patron's fine; return "payment successful"
Description taken from Assignment 8 instructions
***********************************************************/
std::string Library::payFine(std::string pID, double payment)
{
	Patron* p1 = getPatron(pID);
	if (p1 == NULL)
	return "PATRON NOT FOUND";
  
	if (payment < 0)
	return "FINE SHOULD BE POSITIVE";
  
	p1->amendFine(payment);
	return "PAYMENT SUCCESSFUL";
}

//Advances date
void Library::incrementCurrentDate()
{
	currentDate++;
}

//Return patron pointer, or NULL if patron does not exist
Patron* Library::getPatron(std::string pID)
{
	for (int k1 = 0; k1 < members.size(); k1++)
	{
		Patron* p1 = members[k1];
		if (p1->getIdNum() == pID) return p1;
	}
	return NULL;
}

//Returns book poitner matching ID or NULL if it does not exist
Book* Library::getBook(std::string bID)
{
	for (int k1= 0; k1 < holdings.size(); k1++)
	{
		Book* b1 = holdings[k1];
		if (b1->getIdCode() == bID) return b1;
	}
	return NULL;
}
