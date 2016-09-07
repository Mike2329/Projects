/*********************************************************************

** Author: Mike Peters

** Date: 08/07/2015

** Description: ShoppingCart definitions 

*********************************************************************/

#include "ShoppingCart.hpp" //ShoppingCart declarations
#include <string>
using namespace std;

   ShoppingCart::ShoppingCart()
   {
       for(int i=0;i<100;i++) items[i]=NULL; // assign each array element to NULL
       arrayEnd=0;
   }
  
   void ShoppingCart::addItem(Item *tItem)
   {
       items[arrayEnd++]=tItem; //adding each item to array
   }
  
   double ShoppingCart::totalPrice()
   {
       double total=0;
       for(int i=0;i<arrayEnd;i++) //repeat until end of items array
       total+=(items[i]->getQuantity()*items[i]->getPrice()); //calling price and quantity by get methods
   return total; //return total
   }

