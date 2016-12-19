/*********************************************************************

** Author: Mike Peters

** Date: 11/05/2015

** Description: Singly linked list function definitions

*********************************************************************/
#include <iostream>
#include "list.hpp"
using namespace std;

//function to add an integer to the list
void List::add(int add)
{
	//check if list is empty
	if (head == NULL)
	{
		head = new Node(add);
	}
	//if list is not empty add new integer to end of list
	else
	{
		Node *nodePtr = head;
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new Node(add);
	}
}

//function to display list
void List::display()
{
	//if list is empty, say so
	Node *nodePtr = head;
	if (nodePtr == NULL)
		cout << "The list is empty" << endl;

	//if list is not empty, display contents
	else
	{
		while (nodePtr)
		{
			cout << nodePtr->number << "  ";
			nodePtr = nodePtr->next;
		}
	}	
		cout << endl;
}

//dereference function for dangling pointers
List::~List()
{
	Node *nodePtr = head;
	while (nodePtr != NULL)
	{
		Node *extra = nodePtr;
		nodePtr = nodePtr->next;
		delete extra;
	}
}


//function to remove an integer from list
int List::remove()
{
	//return -1 if nothing in list
	int val;
	if (!head)
	{
		return -1;
	}
	
	//return value of last integer, and delete
	else
	{
		Node *previous = head;
		Node *end = head->next;
		while (end->next != NULL)
		{
			previous = end;
			end = end->next;
		}
		val = end->number;
		delete end;
		previous->next = NULL;
	}
	return val;
}




