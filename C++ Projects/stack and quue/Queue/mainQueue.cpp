/*********************************************************************

** Author: Mike Peters

** Date: 11/05/2015

** Description: Doubly linked Queuenode list 

*********************************************************************/

#include <iostream>
using namespace std;

//create doubly linked node
struct node
{
	int data;
	struct node* front;
   	struct node* back;
};

//create front and back node poiners and set to NULL by default
struct node* frnt = NULL;
struct node* bck = NULL;

//functions to add, remove, and display (first two were given in assignment)
void add(int data);
int remove();
void display();

int main()
{
	int a;
	int option;
	int integer;
	//Menu to add, remove, and display items
	//this is mostly the same menu from an earlier assignment
   	while (true)
	{
		cout << "Enter 1 to add an integer" << endl;
       		cout << "Enter 2 to remove an integer" << endl;
       		cout << "Enter 3 to display list" << endl;
       		cout << "Enter 4 to exit" << endl;
       		cout << "Choose an option: " << endl;
       		cin >> option;
      
       		//Swicth to call proper function or end program
       		switch (option)
       		{
	       		case 1:
				cout << "enter an integer:";
				cin >> integer;
		       		add(integer);
		       		break;
	       		case 2:
				a = remove();
				if (a == -1)
					cout << "The list is empty" << endl;
				else
				{
		       		cout << "the number removed was:" << a;
				cout << endl;
				}
		       		break;
	       		case 3:
		       		display();
		       		break;
	       		case 4:
		       		return 0;
	       		default:
		       		cout << "That was not a valid option" << endl;
		       		return 0;
       		}
  	}
   return 0;
}

//function adds an integer to linked list
void add(int data)
{

   	struct node* newNode= new node();
   	newNode->data = data;
   
	//if statement to see if list is empty
	if(frnt == NULL && bck == NULL)
   	{
       		newNode->front = NULL;
       		newNode->back = NULL;
       
		//set front and back = to each other if only one 
       		frnt = newNode;
       		bck = newNode;
   	}
   	else
	{
       //the new node will point to bck pointer
       		newNode->front = bck;
       		newNode->back = NULL;
       //update the bck pointer, make bck back point to new node
       		bck->back=newNode;
       		bck = newNode;
   	}
}

//function to remove integer from list
int remove()
{
	if(frnt != NULL)
	{
   		int data = frnt->data;
   		struct node * temp = frnt;
   		frnt->front = NULL;
   		frnt = frnt->back;
   		return data;
   	}
	//if list is empty, return -1, 
	else 
	{
   		bck = NULL;
   		return -1;
	}
}

//function to display list
void display()
{
   	struct node* temp = frnt;
	if (temp == NULL)
		cout << "The list is empty" << endl;
	else
	{
   		while (temp != NULL)
		{
       			cout << temp->data <<" ";
       			temp = temp->back;
   		}
   		cout << endl;
	}
}
