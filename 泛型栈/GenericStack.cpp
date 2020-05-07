#include<iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack<char> c;
	std::string s{ "hello world!" };
	for (auto& i : s) {
		c.push(i);
	}
	while (!c.empty())
	{
		cout << c.pop();
	}
	cout << endl;
}
