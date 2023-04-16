#include<iostream>

using namespace std;

class AA{
public:
    int* m_data = nullptr;
    AA() = default;

    void malloc(){
        m_data = new int;
        memset(m_data, 2, sizeof(int));
    }

    AA(const AA& a){
        cout<<"调用了拷贝构造函数"<<endl;
        if(m_data == nullptr)malloc();
        memcpy(m_data, a.m_data, sizeof(int));
    }

    AA& operator=(const AA& a){
        cout<<"调用了赋值函数"<<endl;
        if(this==&a)return *this;
        if(nullptr==m_data)malloc();
        memcpy(m_data, a.m_data, sizeof(int));
        return *this;
    }

    AA(AA&& a){
        cout<<"调用了移动构造函数"<<endl;
        if(m_data != nullptr)delete m_data;    // 如果已分配内存, 先释放掉
        m_data = a.m_data;     // 把资源通过指针从源对象转移过来
        a.m_data = nullptr;    // 把源对象的指针置空
    }

    AA& operator=(AA&& a){
        cout<<"调用了移动赋值函数"<<endl;
        if(m_data != nullptr)delete m_data;
        m_data = a.m_data;
        a.m_data = nullptr;
        return *this;
    }

    ~AA(){
        if(nullptr != m_data){
            delete m_data;
            m_data = nullptr;
        }
    }
};
int main(){
    AA a1;
    a1.malloc();
    *a1.m_data = 3;
    cout<<"a1.m_data="<<*a1.m_data<<endl;

    AA a2 = a1;
    cout<<"a2.m_data="<<*a2.m_data<<endl;

    AA a3;
    a3 = a1;
    cout<<"a3.m_data="<<*a3.m_data<<endl;

    auto f = [=](){return AA();};
    AA a4 = f();      // 函数返回一个右值对象, 调用移动构造函数
    a4.malloc();
    *a4.m_data = 5;
    cout<<"a4.m_data="<<*a4.m_data<<endl;

    AA a5;
    a5 = f();      // 函数返回一个右值对象, 调用移动赋值函数
    a5.malloc();
    *a5.m_data = 6;
    cout<<"a5.m_data="<<*a5.m_data<<endl;
}
