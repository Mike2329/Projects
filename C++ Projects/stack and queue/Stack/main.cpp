/*********************************************************************

** Author: Mike Peters

** Date: 11/05/2015

** Description: Singly linked list (FILO) 

*********************************************************************/
#include <iostream>
#include "list.hpp"
using namespace std;

int main()
{
	List list;
	int integer;
	int option;
	int a;
   //Menu to add, remove, and display integers
   while (true){
       cout << "Enter 1 to add an integer" << endl;
       cout << "Enter 2 to remove an integer" << endl;
       cout << "Enter 3 to display list" << endl;
       cout << "Enter 4 to exit" << endl;
       cout << "Choose an option: " << endl;
       cin >> option;
      
       //Swicth to call proper list class function or end program
       switch (option){
       case 1:
	   cout << "Enter an integer: ";
           cin >> integer;	   
           list.add(integer);
           break;
       case 2:
	   a = list.remove();
	   if (a == -1)
		   cout << "No integer to remove, list is empty" << endl;
	   else
		   cout << "The number removed was:" << a << endl;
           break;
       case 3:
           list.display();
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
