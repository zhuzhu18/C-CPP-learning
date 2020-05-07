#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;
int main() {
	fs::path p{ R"(E:\C-CPP\filesystem\PathQuery.cpp)" };
	if (p.empty()) {
		cout << p << "�ǿյ�" << endl;
	}
	if (!fs::exists(p)) {
		cout << p << "������" << endl;
		std::exit(0);
	}
	cout << "����" << p.root_name() << "\n" <<
		"��·��" << p.root_path() << "\n" <<
		"���·��" << p.relative_path() << "\n";
	cout << "��·��" << p.parent_path() << "\n" <<
		"�ļ���" << p.filename() << "\n" <<
		"�ļ�������" << p.stem() << "\n" <<
		"��չ��" << p.extension();
}