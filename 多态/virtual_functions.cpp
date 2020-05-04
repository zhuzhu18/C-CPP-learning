#include<iostream>
using namespace std;
class P {
public:
	virtual std::string f() { return "P"; }            // 将基类的同名函数声明为虚函数，供子类覆写
};
class A :public P {
public:
	std::string f() override{ return "A"; }
};
class B :public P {
public:
	virtual std::string f() { return "B"; }
};

int main() {
	P* p;
	A a;
	B b;

	cout << a.f() << endl;              // 输出A，调用a对象的成员函数
	p = &a;
	cout << p->f() << endl;              // 输出A，动态联编，调用对象的成员函数
	cout << b.f() << endl;                // 输出B
	p = &b;
	cout << p->f() << endl;              // 输出B，调用b对象的成员函数
}
