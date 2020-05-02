#include <iostream>
using namespace std::string_literals;

const char* s1 = { R"NoUse(Hello
World!)NoUse" };                                // 定义原生字符串， NoUse是分隔符，不显示
const char* s2 = "Hello\nWorld!";
auto s3 = "Hello"s;              // " "s是std::string类型
auto s4{ std::string{"Hello"} };          // 等价于上一行
auto s5 = "Hello";                        // s5是const char*类型

int main() {
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
	std::cout << s4 << std::endl;
	std::cout << s5 << std::endl;
}
