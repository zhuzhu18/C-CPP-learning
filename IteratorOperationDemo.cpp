#include <iostream>
#include <vector>

int main() {
	std::vector<int> intVector;
	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);
	intVector.push_back(4);
	intVector.push_back(5);

	std::vector<int>::iterator iter;

	for (auto iter = intVector.begin(); iter != intVector.end(); iter++) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	for (auto iter = intVector.rbegin(); iter != intVector.rend(); iter++) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	std::cout << *(iter-2);
}