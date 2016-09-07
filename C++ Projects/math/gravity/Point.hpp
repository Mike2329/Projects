/*********************************************************************

** Author: Mike Peters

** Date: 07/24/2015

** Description: define class Point

*********************************************************************/
#include <cmath>

class Point
{
private:
   	double x;
   	double y;
public:
   	Point();
   	Point(double xval, double yval);
   	void setXCoord(double xval);
   	void setYCoord(double yval);
   	double getXCoord();
   	double getYCoord();
   	double distanceTo(const Point &p);
};


