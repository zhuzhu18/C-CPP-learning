#include "Vec2D.h"

Vec2D::Vec2D(double x, double y) {
	this->x = x;
	this->y = y;
}

Vec2D Vec2D::operator+(const Vec2D& v){
	return Vec2D{ x + v.x, y + v.y };
}

Vec2D Vec2D::operator+(const double b) {
	return this->operator+(Vec2D{ b, b });
}

Vec2D operator+(const double b, Vec2D& z) {
	return z.operator+(Vec2D{ b, b });
}

Vec2D& Vec2D::operator+=(const Vec2D& v) {
	x += v.x;
	y += v.y;
	return *this;
}

std::string Vec2D::toString() {
	return std::string("Vec: ("  + std::to_string(x) + ", "+std::to_string(y)+")");
}