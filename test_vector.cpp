#include<iostream>
#include<vector>

using namespace std;

class A{
public:
    A(int i){cout<<"A()"<<endl;m=i;}
    A(const A& a){cout<<"A(const A&)"<<endl;}

private:
    int m;
};

int main(){
    vector<int> v1;
    cout<<"v1.capacity()="<<v1.capacity()<<", v1.size()="<<v1.size()<<endl;    // 容器的容量和实际大小

    vector<int> v2(8);        // 创建一个容量和实际大小都为8的vector容器
    cout<<"v2.capacity()="<<v2.capacity()<<", v2.size()="<<v2.size()<<endl;

    vector<int> v3{1, 5, 2, 4, 3};
    cout<<v3.front()<<endl;        // 第一个元素
    cout<<v3.back()<<endl;        // 最后一个元素
    std::reverse(v3.begin(), v3.end());      // 反转vector
    vector<A> v4;
    v4.push_back(2);       // 调用一次普通构造函数和拷贝构造函数
    v4.emplace_back(2);      // 只调用一次普通构造函数
}
