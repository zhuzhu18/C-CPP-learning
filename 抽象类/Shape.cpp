#include "Shape.h"

Color Shape::getColor() { return color; }
bool Shape::isFilled() { return filled; }
void Shape::setColor(Color c) { color = c; }
void Shape::setFilled(bool fill) { filled = fill; }
Shape::Shape(Color c, bool fill) { color = c;filled = fill; }
std::string Shape::toString() {
	std::array<std::string, 7> co{ "white"s, "black"s, "yellow"s, "blue"s, "red"s, "orange"s, "pink"s };
	return "shape: " + co[static_cast<int>(color)] + " " + (filled ? "filled "s : "not filled"s);
}
std::string Shape::colorToString() {
	return colorNames[static_cast<int>(color)];
}
std::string Shape::filledToString() {
	return filled ? "filled"s : "not filled"s;
}