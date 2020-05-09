#include <iostream>

inline int max(int, int);

int main() {
	std::cout << max(2, 3)<<"\n";
	std::cout << max(5, 4)<<"\n";
}

int max(int a, int b) {
	return a > b ? a : b;
}
