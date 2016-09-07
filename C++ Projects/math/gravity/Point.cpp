/*********************************************************************

** Author: Mike Peters

** Date: 07/24/2015

** Description: calculate distance between two (x, y) coordinates

*********************************************************************/

#include "Point.hpp"

Point::Point()
{
   	setXCoord(0);
   	setYCoord(0);
}

Point::Point(double xval, double yval)
{
   	setXCoord(xval);
   	setYCoord(yval);
}

void Point::setXCoord(double xval)
{
   	x = xval;
}

void Point::setYCoord(double yval)
{
   	y = yval;
}

double Point::getXCoord()
{
   	return x;
}

double Point::getYCoord()
{
   	return y;
}

double Point::distanceTo(const Point &p)
{
   	return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
}
