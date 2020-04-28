#include <iostream>

int main()
{
    const char* s = "hello zhuzhu";         // 字符串是常量，字符串指针和引用均需加const修饰
    const char*& t = s;
    std::cout << s << std::endl;
    std::cout << t << std::endl;
}
