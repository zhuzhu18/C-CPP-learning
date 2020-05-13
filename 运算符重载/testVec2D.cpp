#include <iostream>
#include "Vec2D.h"

using namespace std;

int main() {
	Vec2D v1{ 2, 3 }, v2{ 3, 4 };
	cout << v1.toString() << endl;
	cout << (v1 + v2).toString() << endl;
	cout << (2 + v2).toString() << endl;

	v1 += v2;
	cout << v1.toString() << endl;
}
