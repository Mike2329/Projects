/*********************************************************************

** Author: Mike Peters

** Date: 07/24/2015

** Description: calculate slope

*********************************************************************/

#include "LineSegment.hpp"
#include <iostream>


LineSegment::LineSegment()
{
   	Point p1, p2;
  	setEnd1(p1);
   	setEnd2(p2);
}

LineSegment::LineSegment(Point &p1, Point &p2)
{
   	setEnd1(p1);
   	setEnd2(p2);
}

void LineSegment::setEnd1(Point &p)
{
   	p1.setXCoord(p.getXCoord());
   	p1.setYCoord(p.getYCoord());
}

void LineSegment::setEnd2(Point &p)
{
   	p2.setXCoord(p.getXCoord());
   	p2.setYCoord(p.getYCoord());
}

Point &LineSegment::getEnd1()
{
   	return p1;
}

Point &LineSegment::getEnd2()
{
   	return p2;
}

double LineSegment::getLength()
{
	return p1.distanceTo(p2);
}

double LineSegment::getSlope()
{
       return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
}

