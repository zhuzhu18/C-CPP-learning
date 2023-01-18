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

void call_by_value(shared_ptr<Cat> c){
    cout<<"pass by value"<<endl;
    c->cat_info();
}

void call_by_ref(shared_ptr<Cat>& c){
    cout<<"pass by reference"<<endl;
    c->cat_info();
}

int main(){
    shared_ptr<Cat> c1 = make_shared<Cat>("mm");
    call_by_value(c1);      // 无需用move转换为右值, 可直接值传递, 但形参会拷贝构造出一个局部对象
    c1->cat_info();          //

    shared_ptr<Cat> c2 = make_shared<Cat>("hua");
    call_by_ref(c2);     // 引用的方式unique_ptr不会调用拷贝构造, 可直接传递
    c2->cat_info();       // 可正常执行, 传值时形参不会涉及拷贝构造, 退出函数后实参还存在

    shared_ptr<Cat> c3 = make_unique<Cat>("zhi");     // 可将unique_ptr直接赋值给shared_ptr, 反之则不行

    return 0;
}