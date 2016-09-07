/*********************************************************************

** Author: Mike Peters

** Date: 10/25/2015

** Description: List class definitions

*********************************************************************/

#include "List.hpp"

//Default constructor
List::List(){
   count = 0;
   capacity = 10;
   arr = new Item*[10];
}

//Function to add item that a user inputs
void List::addItem(){
   string name, unit;
   int num;
   double price;
   cout << "Enter Item Name: ";
   cin.ignore();
   getline(cin, name);
   cout << "Enter unit(can, box, pounds, ounces): ";
   cin >> unit;
   cout << "How many " << name << "s do you want to buy: ";
   cin >> num;
   cout << "Unit price: ";
   cin >> price;
   if (count == capacity)
       doubleSize();
   arr[count++] = new Item(name, unit, num, price);
}

//Function for list size
void List::doubleSize(){
   capacity *= 2;
   Item **newarr = new Item*[capacity];
   for (int i = 0; i < count; ++i){
       newarr[i] = arr[i];
   }
   arr = newarr;
}

//Removes item from array
void List::removeItem(int ind){
   for (int i = ind; i < count - 1; ++i){
       arr[i] = arr[i + 1];
   }
   --count;
}

//Function asking what item to remove, searches array for that item
void List::removeItem(){
   cout << "Enter name of the item to remove: ";
   string name;
   cin.ignore();
   getline(cin, name);
   for (int i = 0; i < count; ++i){
       if (arr[i]->getName() == name){
           removeItem(i);
       }
   }
}

//Function loop to print contents of the list array and the total bill
void List::display(){
   double sum = 0;
   for (int i = 0; i < count; ++i){
       cout << "Name: " << arr[i]->getName() << endl;
       cout << "Unit: " << arr[i]->getUnit() << endl;
       cout << "Number: " << arr[i]->getNumbers() << endl;
       cout << "Unit Price: " << arr[i]->getUnitPrice() << endl;
       cout << "Extended Price: " << arr[i]->getUnitPrice() * arr[i]->getNumbers() << endl << endl;
       sum += (arr[i]->getUnitPrice() * arr[i]->getNumbers());
   }
   cout << "The total bill is: " << sum << endl << endl;
}


