/*********************************************************************

** Author: Mike Peters

** Date: 08/07/2015

** Description: Item class definitions
*********************************************************************/
#include <string> 
#include "Item.hpp" //Contains declarations
using namespace std;

   void Item::setName(string nm) //Set name method
   {name=nm;}
  
   string Item::getName() //Returns name
   {return name;}
  
   void Item::setPrice(double pr) //Set price method
   {price=pr;}
  
   double Item::getPrice() //Returns price
   {return price;}
  
   void Item::setQuantity(int qty) //Set quantity method
   {quantity=qty;}
  
   int Item::getQuantity() //Returns quantity 
   {return quantity;}
   
   Item::Item(string nm, double pr, int qty) //constructor with parameters
   {
       name=nm;price=pr;quantity=qty;
   }
  
   Item::Item() //default constructor set name, price, quantity to default value
   {
       name="";
       price=0;
       quantity=0;
   }

