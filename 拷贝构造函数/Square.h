#pragma once
#include<iostream>
class Square {
private:
	double side;
	static int numberOfObjects;
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	Square() :Square(1.0) {}
	Square(const Square& q) {                    // 定义拷贝构造函数
		this->side = q.side;
		numberOfObjects++;
		std::cout << "拷贝构造函数被调用" << std::endl;
	}
	~Square() { 
		numberOfObjects--; 
		std::cout << "还有" << numberOfObjects << "个对象" << std::endl;
	}
	double getArea() { return side * side; }
	static int getNumberOfObjects() { return numberOfObjects; }
};
