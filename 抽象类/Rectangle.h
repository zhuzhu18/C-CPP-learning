#pragma once
#include "Shape.h"
class Rectangle :public Shape {
private:
	double width, height;
public:
	double getWidth() const;
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);
	Rectangle(double w, double h, Color c, bool fill);
	virtual double getArea() override;
	std::string toString();
};