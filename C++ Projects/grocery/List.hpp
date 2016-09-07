/*********************************************************************

** Author: Mike Peters

** Date: 10/25/2015

** Description: List class declarations

*********************************************************************/

#include "Item.hpp"

class List{
private:
   Item **arr;
   int count;
   int capacity;
   void doubleSize();
   void removeItem(int ind);
public:
   List();
   void addItem();
   void removeItem();
   void display();
};

