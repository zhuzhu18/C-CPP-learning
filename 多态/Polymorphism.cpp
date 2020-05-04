#include<iostream>
using namespace std;
class P {
public:
	std::string f() { return "P"; }
};
class A :public P {
public:
	std::string f(){ return "A"; }
};
class B :public P {
public:
	std::string f() { return "B"; }
};

int main() {
	P* p;
	A a;
	B b;

	cout << a.f() << endl;              // 输出A，a对象是A类型
	p = &a;
	cout << p->f() << endl;              // 输出P，静态联编，对象是什么类型就调用对应类的同名函数
	cout << b.f() << endl;                // 输出B
	p = &b;
	cout << p->f() << endl;              // 输出P，b对象是P类型，所以输出P
}
