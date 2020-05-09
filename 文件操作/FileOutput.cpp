#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;
int main() {
	fs::path p{ "scores.txt" };
	ofstream output{ "scores.txt" };
	output << "zhuzhihua  " << 98 << endl;
	output << "liwenjuan  " << 100 << endl;
	cout << "文件的大小：" << fs::file_size(p) << endl;
}
