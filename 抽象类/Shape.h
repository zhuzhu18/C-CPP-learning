#pragma once
#include <iostream>
#include <array>

using namespace std::string_literals;
enum class Color {
	white, black, yellow, blue, red, orange, pink
};
class Shape {
private:
	Color color{ Color::red };
	bool filled{ true };
	std::array<std::string, 7> colorNames{ "white"s, "black"s, "yellow"s, "blue"s, "red"s, "orange"s, "pink"s };
public:
	Color getColor();
	bool isFilled();
	void setColor(Color c);
	void setFilled(bool fill);
	Shape() = default;
	Shape(Color c, bool fill);
	std::string toString();
	std::string colorToString();
	std::string filledToString();
	virtual double getArea() = 0;
};