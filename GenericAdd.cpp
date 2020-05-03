#include<iostream>
using namespace std;
template<class T, typename Q>
auto add(T x, Q y) { return x + y; }
int main() {
	cout << add(2.3, 3) << endl;
}
