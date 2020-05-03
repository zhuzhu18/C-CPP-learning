#include<iostream>
#include<string>
using namespace std::string_literals;
using namespace std;
template<typename T>
T max(T x, T y) {
	return x > y ? x : y;
}
template<int> int max(int, int);            // 显式函数模板实例化
int main() {
	cout << "max(3, 6) = " << max(3, 6) << endl;
	cout << "max(2.9, 1.0) = " << max(2.9, 1.0) << endl;             // 隐式函数模板实例化
	cout << "max('A', 'D') = " << max('A', 'D') << endl;
	cout << R"(max("ABC", "ABD") = )" << max("ABC", "ABD") << endl;
	cout << R"(max("ABC"s, "ABD"s) = )" << max("ABC"s, "ABD"s)<<endl;
}
