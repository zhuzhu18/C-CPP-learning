#include"Rectangle.h"
double Rectangle::getHeight() const { return height; }
double Rectangle::getWidth() const { return width; }
void Rectangle::setHeight(double h) { this->height = h; }
void Rectangle::setWidth(double w) { width = w; }
Rectangle::Rectangle(double w, double h, Color c, bool f) :width{ w }, height{ h }, Shape{c, f}{}
double Rectangle::getArea() const { return width * height; }
