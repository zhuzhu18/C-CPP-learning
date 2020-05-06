#include"Rectangle.h"
#include<string>
double Rectangle::getHeight() const { return height; }
double Rectangle::getWidth() const { return width; }
void Rectangle::setHeight(double h) { this->height = h; }
void Rectangle::setWidth(double w) { width = w; }
Rectangle::Rectangle(double w, double h, Color c, bool f) :width{ w }, height{ h }, Shape{ c, f }{}
double Rectangle::getArea() { return width * height; }
std::string Rectangle::toString() {
	return "Rectangle: width " + std::to_string(width) + "," + "height " + std::to_string(height) + "," +
		colorToString() + " " + filledToString();
}