#include<iostream>

using namespace std;

void test_static_cast(){
    int ii = 10;
    double *pd2 = (double*)(&ii);      // 可以从int*指针转换为double*指针, 但解引用不回原来的10;
//    double* pd3 = static_cast<double*>(&ii);     // 会报错, 不允许这样直接的转换
    void* p4 = &ii;
    double* pd4 = static_cast<double*>(p4);     // 只有先转换成void*, 再转换成其他类型的指针
    cout<<*pd4<<endl;
}

void test_reinterpret_cast(){
    int ii = 10;
    double* pd2 = reinterpret_cast<double*>(&ii);     // 可直接转换, 无需通过void*指针
    cout<<*pd2<<endl;
}

void test_const_cast(){
    int ii = 10;
    const int* pi1 = &ii;
//    int* pi2 = pi1;       // 报错, const指针或引用不能直接去掉const
    int* pi3 = const_cast<int*>(pi1);
    cout<<*pi3<<endl;
}
int main(){
    test_const_cast();
    cout<<&("zhuzhu")<<endl;       // C风格字符串字面量是左值, 可以取地址
    return 0;
}
