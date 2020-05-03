#include <iostream>
using namespace std;
class B {
public:
	void f() { cout << "调用了基类的f()函数"<<endl; }
};

class A:public B {
public:
	using B::f;           // 避免派生类的同名函数隐藏基类的同名函数
	void f(int i) { cout << "调用了派生类的f()函数"<<endl; }
};

int main() {
	A a;
	a.f();
	a.f(1);
}
