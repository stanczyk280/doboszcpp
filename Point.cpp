#include "Point.h"
Point::Point(float a, float b)
{
	x_ = a;
	y_ = b;
}

void Point::przesun(float a, float b)
{
	x_ = x_ + a;
	y_ = y_ + b;
}

void Point::przesun(Point& p)
{
	x_ = p.x_;
	y_ = p.y_;
}

void Point::odbij(Point& p)
{
	x_ = -x_;
	y_ = -y_;
}


void Point::wypisz()
{
	std::cout << "Punkt:(" << x_ << "," << y_ << ")";
}

