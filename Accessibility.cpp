#include<iostream>

using namespace std;
class A {
public:
	int i{ 0 };
protected:
	int j{ 0 };
private:
	int k{ 0 };
};
class Pub :public A {           // 公有继承，不改变基类成员的访问属性
public:
	void foo() {
		i++;j++;
		//k++;        // 无法访问基类私有数据成员
	}
};
class Pro :protected A {           // 保护继承，将基类public成员的访问属性变为protected，其他不变
public:
	void foo() {
		i++;j++;
		// k++;        // 无法访问基类私有数据成员
	}
};
class Pri :private A {           // 私有继承，将基类所有成员的访问属性都变为private
public:
	void foo() {
		i++;
		j++;
		// k++;            // // 无法访问基类私有数据成员
	}
};
int main(){}
