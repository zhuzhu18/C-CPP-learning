#ifndef __VEC_2D_H_
#define __VEC_2D_H_
#include <iostream>
#include <string>

class Vec2D {
private:
	double x, y;
public:
	int z{2};
	Vec2D(double, double);
	Vec2D operator+ (const Vec2D&);
	Vec2D operator+(const double);
	Vec2D& operator+=(const Vec2D& v);
	friend Vec2D operator+(const double, Vec2D&);             // 定义一个浮点数 + 向量时需定义一个友元函数，
																						 // 因为浮点数是内置类型，不能重载运算符
	std::string toString();
};

#endif
