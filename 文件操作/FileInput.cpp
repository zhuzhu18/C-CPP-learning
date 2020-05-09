#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
int main() {
	std::filesystem::path p{ "scores.txt" };
	ifstream input{ p };
	if (input.fail()) {
		cout << "文件打开失败" << endl;
		return 0;
	}
	else {
		char c;
		while (!input.get(c).eof()) {
			cout << c;
		}
	}
}
