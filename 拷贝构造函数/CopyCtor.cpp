#include<iostream>
#include "Square.h"

int Square::numberOfObjects = 0;
int main() {
	Square s1{ 1.0 };
	std::cout << "创建了" << Square::getNumberOfObjects() << "个对象" << std::endl;
	Square s2{ s1 };
	std::cout << "创建了" << Square::getNumberOfObjects() << "个对象" << std::endl;
	Square* s3 = new Square{ s1 };
	std::cout << "创建了" << Square::getNumberOfObjects() << "个对象" << std::endl;

}
