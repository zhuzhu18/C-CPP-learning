#include<iostream>
using namespace std;
struct Base {
	virtual void foo() { cout << "基类Base的foo函数" << endl; }
};
struct A :Base {
	virtual void foo() final { cout << "派生类A的foo函数" << endl; }        // 声明为final，则不能被派生类覆写
};
struct B :A {
	/* void foo(){ cout << "派生类A的foo函数" << endl; }        错误，无法覆写基类A的final函数*/
};
int main() {
	auto a = A();
	Base& p1 = a;
	p1.foo();             // 派生类A的foo函数
	Base p2{ a };
	p2.foo();             // 基类Base的foo函数
}
