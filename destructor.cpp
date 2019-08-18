#include <stdio.h>
class A
{
public:
    int i;
    A(int a);
    ~A();
    void f();
};
A::A(int a)
{
    i = a;
    printf("A的构造函数被调用\n");
}
A::~A()
{
    printf("A的析构函数被调用");
}
void A::f()
{
    this->i = 20;
    printf("A::f()--&i=%p\n",&i);
    printf("this=%p\n", this);
}
struct B
{
    int i;
};
void f(struct B* p)
{
    p->i = 20;
}
int main()
{
    A a(1);
    B b;
    printf("&a=%p\n", &a);
    printf("&a.i=%p\n", &(a.i));
    A aa(2);
    a.f();
    printf("&aa=%p\n", &aa);
    aa.f();
    A y[2] = {A(1)};      //error: y[1]相当于A(), 没有定义这样的默认构造函数
}
