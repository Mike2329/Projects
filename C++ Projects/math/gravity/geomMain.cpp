/*********************************************************************

** Author: Mike Peters

** Date: 07/24/2015

** Description: a function to calulate distance an object falls due to gravity in a specific time period

*********************************************************************/
#include <iostream>
#include "LineSegment.hpp"

using namespace std;

int main(){
   double x1, y1, x2, y2;
   cout << "x for first point: ";
   cin >> x1;
   cout << "y for first point: ";
   cin >> y1;
   cout << "x for second point: ";
   cin >> x2;
   cout << "y for second point: ";
   cin >> y2;
   Point p1(x1, y1), p2(x2, y2);
   LineSegment L(p1, p2);
   cout << "Length of the line segment is " << L.getLength() << endl;
   cout << "Slope of the Line segment is " << L.getSlope() << endl;

   return 0;
}
