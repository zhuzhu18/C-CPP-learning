#include <iostream>
using namespace std;
class Computer {
public:
	Computer() { cout << "Computer()" << endl; }
	~Computer() { cout << "~Computer()" << endl; }
};

class PC:public Computer {
public:
	PC() { cout << "PC()" << endl; }
	~PC() { cout << "~PC()" << endl; }
};
class Camera {
public:
	Camera() { cout << "Camera()" << endl; }
	~Camera() { cout << "~Camera()" << endl; }
};
class Laptop :public PC {
public:
	Laptop() { cout << "Laptop()" << endl; }
	~Laptop() { cout << "~Laptop()" << endl; }
private:
	Camera c;
};

class Desktop :public PC {
public:
	Desktop() { cout << "Desktop()" << endl; }
	~Desktop() { cout << "~Desktop()" << endl; }
};

int main() {
	Laptop l;               // 继承链的构造函数的调用顺序：父类 --> 内嵌对象 --> 子类，析构函数的调用顺序刚好相反
	Desktop d;
}
