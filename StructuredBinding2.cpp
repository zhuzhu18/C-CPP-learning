#include <iostream>

using namespace std;
struct S {
	int i1{ 1 };
	double d1{ 2.0 };
};
class C {
public:
	int i2{ 3 };                        // 只能绑定到类的公有数据成员
	char c[3]{ 'a', 'b' , '\0'};
};
int main() {
	S s;
	C c;
	auto [s1, s2] {s};
	auto& [c1, c2] = c;
	cout << "s1.i1 = " << s1 << ", s1.d1 = " << s2 << endl;

	c.c[1] = 'd';
	cout << "c.i2 = " << c1 << ", c.c[2] = " << c2 << endl;
}