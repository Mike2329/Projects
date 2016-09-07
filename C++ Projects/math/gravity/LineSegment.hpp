/*********************************************************************

** Author: Mike Peters

** Date: 07/24/2015

** Description: define class LineSegment
*********************************************************************/

#include "Point.hpp"

class LineSegment
{
private:
   	Point p1;
   	Point p2;
public:
   	LineSegment();
   	LineSegment(Point &p1, Point &P2);
   	void setEnd1(Point &p);
   	void setEnd2(Point &p);
  	Point &getEnd1();
   	Point &getEnd2();
   	double getLength();
   	double getSlope();
   	bool isinf();
};

