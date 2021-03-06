#pragma once
#include "Point.h"
#include <iostream>

class Point
{
public:
	Point(float a, float b);
	void przesun(float a, float b);
	void przesun(Point& p);
	void odbij(Point& p);
	void wypisz();
private:
	float x_, y_;
};