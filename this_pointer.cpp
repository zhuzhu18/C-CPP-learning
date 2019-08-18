#include <iostream>

using namespace std;

/*
 * 
 */
class A
{
private:
    int i;
    int *p;
public:
    A(){
        p = 0;
        i = 0;
        cout<< "构造函数A::A()被调用了"<<endl;
    }
    ~A(){
        if(p) delete p;
        cout<<"析构函数A::~A()被调用, i="<<i<<endl;
    }
    void f(){
        p = new int;
    }
public:
    void setI(int i)
    {
        this->i = i;
    }
};
int main(int argc, char** argv) {
    A *p = new A[10];
    for(int i=0;i<10;i++)
    {
        p[i].f();
        p[i].setI(i);
    }
    delete []p;
    return 0;
}
