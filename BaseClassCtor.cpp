#include <iostream>
using namespace std;
class B {
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
};
class E {
public:
	E() { cout << "E(" << ")" << endl; }
};
class D:public B{
	using B::B;           // 继承基类的所有默认构造函数, D():B(){}, D():B(int i){} 和 D():B(char c){}
public:
	D() = default;       // 相当于 D():B(){}
	D(double x) :e1{}, B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }          // 先调用基类的构造函数，
																						// 再调用内嵌对象的构造函数，最后调用本类的构造函数
private:
	E e1;
};
int main() {
	B b;
	D d;
	D d2{ 3.03 };
}
