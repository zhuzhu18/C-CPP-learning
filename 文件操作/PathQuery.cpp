#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;
int main() {
	fs::path p{ R"(E:\C-CPP\filesystem\PathQuery.cpp)" };
	if (p.empty()) {
		cout << p << "是空的" << endl;
	}
	if (!fs::exists(p)) {
		cout << p << "不存在" << endl;
		std::exit(0);
	}
	cout << "根名" << p.root_name() << "\n" <<
		"根路径" << p.root_path() << "\n" <<
		"相对路径" << p.relative_path() << "\n";
	cout << "父路径" << p.parent_path() << "\n" <<
		"文件名" << p.filename() << "\n" <<
		"文件名主干" << p.stem() << "\n" <<
		"扩展名" << p.extension();
}