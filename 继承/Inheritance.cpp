#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

int main() {
	Shape s1{ Color::blue, false };
	Circle c1{ 3.0, Color::orange, true };
	Rectangle r1{ 4.0, 1.0, Color::pink, false };

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;
}
