#include <iostream>
#include <array>

void print(std::array<int, 5> a) {
	for (auto x : a)
		std::cout << x << " ";
	std::cout << std::endl;
}
int search(std::array<int, 5>& a, int token) {
	bool exist{ false };
	int i{ 0 };
	for (auto element : a) {
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist)
		return i;
	else
		return -1;
}
int main() {
	std::array a{ 1, 2, 3, 4, 5 };
	print(a);

	a = { 6, 7, 8, 9, 10 };        // array数组可以直接赋值
	print(a);
	
	std::array b{ 100, 200, 300, 400, 500 };
	a.swap(b);              // 交换两个数组的值
	print(a);
	print(b);

	std::cout << a.size() << std::endl;           // 数组大小
	std::cout << b.max_size() << std::endl;               // 数组大小
	std::cout << "search 300:"<<search(a, 300)<<std::endl;            // 查找数组元素的下标
	std::cout << "search 11:" << search(b, 11) << std::endl;
	std::sort(a.rbegin(), a.rend());            // 将数组排序
	print(a);

	std::reverse(a.begin(), a.end());        // 将数组逆序
	print(a);

	std::cout << a[2] << std::endl;         // 访问数组的第2个元素
	std::cout << *(a.data()+2) << std::endl;               // 访问数组的第2个元素

	std::cout << a.front() << std::endl;           // 访问数组的第1个元素
	std::cout << a.back() << std::endl;           // 访问数组的最后1个元素
}
