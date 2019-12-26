#include <iostream>

class Circle {
public:
    double radius = 1.0;
    Circle() = default;       // C++11强制编译器生成一个默认构造函数
    Circle(double r){
        this->radius = r;
    }
    double getArea(){
        return 3.14 * radius * radius;
    }
};

int main(){
    Circle c1;
    Circle c2 {2.0};
    std::cout<<c1.getArea() << std::endl;
    std::cout<<c2.getArea() << std::endl;
    
    c1 = c2;
    std::cout<<c1.getArea() << std::endl;
    std::cout<<c2.getArea() << std::endl;
    return 0;
}
