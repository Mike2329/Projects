/*********************************************************************

** Author: Mike Peters

** Date: 10/25/2015

** Description: Main function for shopping cart program

*********************************************************************/
#include "List.hpp"

int main(){
   int option;
   List list; //create list opject
  

   //Menu to add, remove, and display items
   while (true){
       cout << "Enter 1 to add an item" << endl;
       cout << "Enter 2 to remove an item" << endl;
       cout << "Enter 3 to display" << endl;
       cout << "Enter 4 to exit" << endl;
       cout << "Choose an option: " << endl;
       cin >> option;
      
       //Swicth to call proper List class function or end program
       //Note: this was my first time using a switch in a program
       switch (option){
       case 1:
           list.addItem();
           break;
       case 2:
           list.removeItem();
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
