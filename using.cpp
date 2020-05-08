#include <iostream>
#include <typeinfo>

using namespace std;

int sum(int a, int b) { return a + b; }

using FuncType = int(*)(int, int);
int main(int argv, char** argc) {
	using UInt = unsigned int;
	using FuncType = int (*)(int, int);       // 这里等号的右边是一种类型符号，指向一个返回值为int* 类型的函数指针类型，类似于int
	
	FuncType f = sum;
	cout << (*f)(2, 3) << endl;
	for (auto i = 0;i < argv;i++) {
		cout << argc[i] << " ";
	}
	cout << endl;
	const char* a[]{ "zhuzhihua", "likes",  "liwenjuan"};
	for (auto i : a) {
		cout << i<<" ";
	}
	cout << endl;
}
