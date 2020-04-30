#include <iostream>
#include "Square.h"

int Square::numberOfObjects{ 10 };        // 静态数据成员必须在类外声明
int main() {
	Square s1;
	std::cout << s1.getNumberOfObjects()<< std::endl;       // // 静态成员可以实例来访问
	Square s2{ 2.0 };
	std::cout << Square::getNumberOfObjects() << std::endl;      // 静态成员也可以通过类名来访问
}
