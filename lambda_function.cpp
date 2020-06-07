#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	using namespace std;
	std::vector<int> numbers( 1000 );        // size为1000
	std::generate(numbers.begin(), numbers.end(), std::rand);        // 创建1000个随机数
	auto count_13 = std::count_if(numbers.begin(), numbers.end(), [](int x) {return x % 13 == 0;});

	int count{ 0 };
	// 超过一行return语句时lambda函数需注明返回类型，可以按引用捕获函数中的动态变量
	std::for_each(numbers.begin(), numbers.end(), [&count](int x)->bool {if (x % 13 == 0) { count++;return true; }
	else { return false; }});

	cout << count_13 << endl;
	cout << count;
}
