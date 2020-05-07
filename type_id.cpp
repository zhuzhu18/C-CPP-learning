#include <iostream>
#include <typeinfo>
class A {};

int main() {
	A a{};
	auto& t1 = typeid(a);
	if (t1 == typeid(A)) {
		std::cout << "a的类型是" << t1.name() << std::endl;
	}
}
