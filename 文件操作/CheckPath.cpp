#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;
using namespace std;
int main() {
	fs::path p1{ R"(e:\C-CPP\filesystem\hello.txt)" };
	fs::path p2{ "e:/C-CPP/filesystem" };
	cout << fs::path::preferred_separator << endl;

	if (fs::is_regular_file(p1)) {
		cout << "文件的大小是：" << fs::file_size(p1) << "字节" << endl;
	}
	if (fs::is_directory(p2)) {
		cout << p2 << "是一个目录，包含以下子目录："<<endl;
		for (auto& d : fs::directory_iterator(p2)) {
			cout << d.path() << endl;
		}
	}
}
