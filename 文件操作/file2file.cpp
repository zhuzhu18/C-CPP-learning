#include<fstream>
#include<filesystem>
#include<iomanip>

namespace fs = std::filesystem;
int main() {
	char s[500]; int cnt{ 0 };
	fs::path p{ R"(CMakeLists.txt)" };
	std::ifstream inf{ p, std::ios_base::in };           // 输入文件流
	if (!inf.fail()) {
		std::ofstream of{R"(new_file.txt)", std::ios_base::out | std::ios_base::trunc};            // 输出文件流
		while (!inf.eof()) {
			inf.getline(s, sizeof(s) - 1);
			of << std::setfill('0') << std::setw(2) << ++cnt << "    " << s << std::endl;
		}
		inf.close();
		of.close();
	}
}
