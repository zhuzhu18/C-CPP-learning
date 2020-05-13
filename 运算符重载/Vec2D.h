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
	friend Vec2D operator+(const double, Vec2D&);             // ����һ�������� + ����ʱ�趨��һ����Ԫ������
																						 // ��Ϊ���������������ͣ��������������
	double& operator[](const int& index);               // ��Ҫ�޸��±���ʵ�Ԫ��ֵ���򷵻�ֵ��Ϊ�������ͣ���Ϊ����ֵ�����ǿ��޸ĵ���ֵ
	std::string toString();
};

#endif