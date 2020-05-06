#include "Circle.h"
#include<string>

Circle::Circle() = default;
Circle::Circle(double r, Color c, bool f) :Shape{ Color::orange, true } { radius = r; };
double Circle::getRadius() const { return radius; }
double Circle::getArea() { return 3.14 * radius * radius; };
void Circle::setRadius(double r) { radius = r; };
std::string Circle::toString() {
	return "Circle: Radius " + std::to_string(radius) + "," +
		colorToString() + " " + filledToString();
}