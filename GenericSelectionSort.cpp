#include <iostream>
#include <array>

using namespace std;

template<class T, int N> void selectionSort(std::array<T, N>& list) {
	for (int i = 0; i < N - 1; i++) {
		for (auto j = i + 1; j < N; j++) {
			if (list[j] < list[i]) {
				T temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
}
template<typename T, int size> void output(std::array<T, size> x) {
	for (auto i : x)
		cout << i << "   ";
	cout << endl;
}

int main() {
	std::array x { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
	output(x);
	selectionSort(x);
	output(x);

	std::array<int, 8> y{ 9,3,7,5,1,4,2,6 };
	output(y);
	selectionSort(y);
	output(y);
}
