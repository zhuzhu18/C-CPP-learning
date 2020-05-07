#include <iostream>
#include "StackOfIntegers.h"

using namespace std;
int main() {
	StackOfIntegers s1{};
	for (int i = 0;i < 5;i++) {
		s1.push(i + 1);
	}
	cout << "栈的大小：" << s1.getSize() << endl;
	cout << "栈顶的元素：" << s1.peek() << endl;
	const int size = s1.getSize();
	for (int i = 0; i < size;i++) {
		cout << s1.pop() << " ";
	}
	cout << "\n";
	cout << "栈是否为空:" << s1.empty() << endl;
}
