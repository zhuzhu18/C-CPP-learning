#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

template<typename T>
std::string type_to_string(){
    std::string type_name{__PRETTY_FUNCTION__};
    auto start_pos = type_name.find_first_of('=') + 2;
    auto end_pos = type_name.find_first_of(']', start_pos);
    return type_name.substr(start_pos, end_pos - start_pos);
}      // 返回变量的类型

struct S{
        int a;
        string b;
    } m;
int main(int argc, char** argv){
    int a;
    auto& b = a;
    string c;
    cout<<type_to_string<decltype(c)>()<<endl;     // std::string
    cout<<type_to_string<decltype(b)>()<<endl;    // int&
    size_t d;
    cout<<type_to_string<decltype(d)>()<<endl;    // unsigned long
    cout<<type_to_string<decltype(3.2)>()<<endl;    // double
    uint8_t e;
    cout<<type_to_string<decltype(e)>()<<endl;     // unsigned char
    cout<<type_to_string<decltype(m)>()<<endl;    // S
    ptrdiff_t p;
    cout<<type_to_string<decltype(p)>()<<endl;     // long
    auto g = make_pair(2, "zhuzhihua");
    cout<<type_to_string<decltype(g)>()<<endl;    // std::pair<int, const char *>
    auto h = make_tuple(2, 3.5, byte{'c'});
    cout<<type_to_string<decltype(h)>()<<endl;     // std::tuple<int, double, std::byte>
    auto i = {1, 2, 3, 4, 5};
    cout<<type_to_string<decltype(i)>()<<endl;      // std::initializer_list<int>
    auto j = [=](int i){};
    cout<<type_to_string<decltype(j)>()<<endl;      // (lambda at /Users/zhihua19/pycharm_projects/opencv/demo/1.cpp:38:14)

    return 0;
}
