#include <iostream>
using namespace std;

class A{
private:
    int i;
    int *t;
public:
    A(){t=0;cout<<"A::A()被调用"<<endl;}
    ~A(){if (t) delete t; cout<<"A::~A()被调用"<<i<<endl;}
    void set(int m){ i = m;};
    void f(){t = new int;};
    void get(A* q){cout<<q->i<<endl;};
};

int main()
{
    A *p = new A[10];
    for (int i=0;i<10;i++)
        p[i].set(i);
    A b;
    b.set(100);
    p[0].get(&b);
    delete []p;
    
    return 0;
}
