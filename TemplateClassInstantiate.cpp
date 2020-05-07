#include <iostream>
using namespace std;
template<typename T>
class C {
public:
	T elements[100];
};

template class C<int>;             // 用类模板显式实例化一个类
int main() {
	C<int> c1;             // 用实例化的类模板实例出一个对象
	C<char> c2;             // 隐式实例化出一个对象，其中编译器用类模板自动生成一个类C<char>
	for (auto& i : c1.elements) {
		cout << i;
	}
	cout << endl;
	for (auto i : c2.elements) {
		cout << i;
	}
	cout << endl;
}
