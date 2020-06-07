#include<iostream>
using namespace std;
extern double ex1;         // 外部变量会自动初始化为0，extern可以缺省
void update(double dt) {
	extern double ex1;        // 可以重新声明，但不可以重新定义
	ex1 += dt;
	cout << "更新外部变量ex1的值为:  " << ex1 << endl;
}

void local() {
	double ex1{ 0.8 };         // 自动变量
	cout << "在函数内定义的局部变量覆盖全局变量，值为:  " << ex1 << endl;
	cout << "在函数内访问外部的全局变量，值为:  " << ::ex1 << endl;
}
