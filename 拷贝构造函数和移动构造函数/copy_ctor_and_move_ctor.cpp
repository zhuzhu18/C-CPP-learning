#include<iostream>

using namespace std;
class A {
private:
	int n;
	char* pc;
	static int ct;
	void showobject()const;
public:
	A();
	explicit A(int k);
	A(int k, char c);
	A(const A& f);
	A(A&& g);
	~A();
	A operator+(const A& b)const;
	void showdata()const;
};
int A::ct{ 0 };
A::A() {
	++ct;
	n = 0;
	pc = nullptr;
	cout << "调用默认构造函数，对象数量：" << ct << endl;
	showobject();
}
A::A(int k) :n{ k } {
	++ct;
	pc = new char[n];
	cout << "调用int型构造函数，对象数量：" << ct << endl;
	showobject();
}
A::A(int k, char c) :n{ k } {
	++ct;
	pc = new char[n];
	for (int i = 0;i < n;i++) {
		pc[i] = c;
	}
	cout << "调用int, char型构造函数，对象数量：" << ct << endl;
	showobject();
}
A::A(const A& f) {
	++ct;
	n = f.n;
	pc = new char[n];
	for (int i = 0;i < n;i++) {
		pc[i] = f.pc[i];
	}
	cout << "调用拷贝构造函数，对象数量：" << ct << endl;
	showobject();
}
A::A(A&& g) {
	++ct;
	n = g.n;
	pc = g.pc;
	g.n = 0;
	g.pc = nullptr;
	cout << "调用移动构造函数，对象数量：" << ct << endl;
	showobject();
}
A A::operator+(const A& m) const {
	A temp = A(n + m.n);
	temp.pc = new char[temp.n];
	for (int i = 0;i < n;i++) {
		temp.pc[i] = pc[i];
	}
	for (int i = n;i < temp.n;i++) {
		temp.pc[i] = m.pc[i-n];
	}
	cout << "创建了一个临时对象并返回" << endl;
	return temp;
}

void A::showobject() const{
	cout << "元素个数: " << n;
	cout << ",  数据地址:  " << (void*)pc << endl;
}
void A::showdata() const{
	if (n == 0)cout << "空对象" << endl;
	else {
		for (int i = 0;i < n;i++)
			cout << pc[i] << "   ";
		cout << endl;
	}
}
A::~A() {
	cout << "调用了析构函数，对象数量：" << --ct << endl;
	showobject();
	delete[]pc;
}
int main() {
	{
		A one(10, 'x');
		A two{ one };
		A three(20, 'o');
		A four(one + two);
		cout << "对象 one: ";
		one.showdata();
		cout << "对象 two: ";
		two.showdata();
		cout << "对象 three: ";
		three.showdata();
		cout << "对象 four: ";
		four.showdata();
	}
}
