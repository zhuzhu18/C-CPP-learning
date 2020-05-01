#include <iostream>

class Date {
private:
	int year{ 2020 }, month{ 5 };
	int day{ 1 };
public:
	friend void print(const Date& d);          // 定义一个友元函数，在类外访问类的私有数据成员，打破类的封装性
};
void print(const Date& d) {
	std::cout << d.year << "/" << d.month << std::endl;
}
int main() {
	Date d;
	print(d);
}
