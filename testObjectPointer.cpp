#include <iostream>
#include "Circle.h"
/*
Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double radius_) {
    radius = radius_;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}
*/
int main()
{
    Circle* c1 = new Circle{ 2.0 };
    std::cout << (*c1).getArea()<<std::endl;        // 此处 . 运算符的优先级高于 *(解引用运算符)，所以要加括号
    delete c1;

    auto c2 = new Circle[3]{ 1.0, 2.0, 3.0 };
    for (int i = 0; i < 3; i++) {
        std::cout << c2[i].getArea() << std::endl;
    }
    delete [] c2;           // 在堆上创建的对象必须由程序员释放
    c1 = nullptr;
    c2 = nullptr;
    delete c1;            // 删除空指针是安全的
}
