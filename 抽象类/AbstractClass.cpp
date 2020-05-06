#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;
int main() {
	// Shape p{Color::black, true};        基类是抽象类，无法实例化对象
	Circle c{1.2, Color::pink, false};        // 派生类必须实现基类（抽象类）的虚函数
	Rectangle r{ 2.0, 3.0, Color::orange, true };
	Shape* p = &c;
	cout << p->getArea()<<endl;
	p = &r;
	cout << p->getArea();
}
