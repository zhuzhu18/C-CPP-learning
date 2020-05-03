#include <iostream>
using namespace std;
class B
{
public:
	B() { cout << "B()"<<endl; };
	B(int i) { cout << "B(" << i << ")"<<endl; };
	~B() {};
};
class A:public B {
public:
	A() { cout << "A()" << endl; }           // 若不显示调用，派生类会先去调用基类的默认构造函数
	A(int i):B(i) { cout << "A("<<i<<")" << endl; }          // 显示调用基类的带参构造函数
};
int main() {
	B b{2};
	A a1;
	A a2{3};
}
