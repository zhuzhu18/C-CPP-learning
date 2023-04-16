#include<iostream>

using namespace std;

class AA{
public:
    int m_a = 3;
};

AA getTemp(){
    return AA();
}

int main(){
    int&& a = 3;
//    int& a1 = 3;       // 报错, 左值引用只能绑定左值, 右值引用只能绑定右值
    const int& a2 = 3;        // 常量左值引用, 既可以绑定左值, 也可以绑定右值

    int b = 8;
    int&& c = b + 5;
    AA&& aa = getTemp();
    const AA& d = getTemp();
    aa.m_a++;
//    int&& e = c;     // 报错, c是左值, 右值有了名字后就成了左值
    AA& f = const_cast<AA&>(d);      // 要去掉const引用就必须使用const_cast转换
    cout<<aa.m_a<<endl;
    cout<<&aa<<endl;
  
    char *s1 = "zhuzhu";      // C风格字符串字面量是左值, 可以取地址
    const char* s2 = "zhuzhu";
    // char* s3 = s2;          // 报错, 不能直接去掉const
}
