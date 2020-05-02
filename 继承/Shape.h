#pragma once
#include <iostream>
#include <array>

using namespace std::string_literals;
enum class Color {
	white, black, yellow, blue, red, orange, pink
};
class Shape {
private:
	Color color{Color::red};
	bool filled{true};
public:
	Color getColor() { return color; }
	bool isFilled() { return filled; }
	void setColor(Color c) { color = c; }
	void setFilled(bool fill) { filled = fill; }
	Shape() = default;
	Shape(Color c, bool fill) { color = c;filled = fill; }
	std::string toString() {
		std::array<std::string, 7> co{ "white"s, "black"s, "yellow"s, "blue"s, "red"s, "orange"s, "pink"s };
		return "shape: " + co[static_cast<int>(color)] + " " + (filled ? "filled "s: "not filled"s);
	}
};
