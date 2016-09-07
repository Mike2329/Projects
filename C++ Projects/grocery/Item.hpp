/*********************************************************************

** Author: Mike Peters

** Date: 10/25/2015

** Description: Item class declarations

*********************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Item{
private:
   string name;
   string unit;
   int num;
   double unit_price;
public:
   Item();
   Item(string name, string unit, int num, double price);
   void setname(string name);
   void setUnit(string unit);
   void setNumbers(int num);
   void setUnitPrice(double price);
   string getName();
   string getUnit();
   int getNumbers();
   double getUnitPrice();
};

