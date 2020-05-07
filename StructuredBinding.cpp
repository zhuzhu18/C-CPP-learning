#include <iostream>
#include <array>

using namespace std;

int main() {
	std::array arr{ 1, 2, 3 };
	for (auto& i : arr) {
		cout << i << " ";
	}
	cout << endl;

	auto [c1, c2, c3] {arr};
	cout << c1 << " " << c2 << " " << c3 << endl;

	auto& [e1, e2, e3] = arr;
	e1 = 100;
	cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
}
