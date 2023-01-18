#include <iostream>

using namespace std;

class Cat{
public:
    Cat() = default;
    Cat(const string& name):name{name}{
        cout<<"constructor of cat: "<<name<<endl;
    }
    ~Cat(){
        cout<<"Desconstructor of cat: "<<name<<endl;
    };
    void cat_info() const{
        cout<<"cat info name: " << name << endl;
    }
private:
    string name;
};

void call_by_value(unique_ptr<Cat> c){
    cout<<"pass by value"<<endl;
    c->cat_info();
}

void call_by_ref(unique_ptr<Cat>& c){
    cout<<"pass by reference"<<endl;
    c->cat_info();
}

int main(){
    unique_ptr<Cat> c1 = make_unique<Cat>("zhu");
    call_by_value(std::move(c1));      // 必须通过move转换为右值, 来转移所有权给函数的形参
    // c1->cat_info();          // 会崩溃, c1的所有权被转移给形参, 退出函数后形参被释放

    unique_ptr<Cat> c2 = make_unique<Cat>("hua");
    call_by_ref(c2);     // 引用的方式unique_ptr不会调用拷贝构造, 可直接传递
    c2->cat_info();       // 可正常执行, 传值时形参不会涉及拷贝构造, 退出函数后实参还存在

    return 0;
}