#pragma once
#include "Shape.h"
class Circle:public Shape {
private:
	double radius = 1.0;
public:
	Circle();
	Circle(double r, Color c, bool f);
	double getRadius() const;
	double getArea();
	void setRadius(double r);
};
