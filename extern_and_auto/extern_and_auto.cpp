#include<iostream>

double ex1{ 0.3 };
void update(double dt);
void local();

int main() {
	using namespace std;
	cout << ex1 << endl;    // 0.3
	update(0.1);          // 0.4
	cout << ex1 << endl;       // 0.4
	local();                   // 0.8
	cout << ex1 << endl;         // 0.4
}
