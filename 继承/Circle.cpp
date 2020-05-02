#include "Circle.h"

Circle::Circle() = default;
Circle::Circle(double r, Color c, bool f) :Shape{Color::orange, true} { radius = r; };
double Circle::getRadius() const { return radius; };
double Circle::getArea() { return 3.14 * radius * radius; };
void Circle::setRadius(double r) { radius = r;};
