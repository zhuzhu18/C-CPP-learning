#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
	fs::path p1{ R"(c:\temp)" };
	fs::path p2{ R"(c:\temp)" };
	fs::path p3{ "" };

	p1.append("users");
	p1 /= "zhuzhu";
	cout << p1 << endl;

	p2.concat(R"(users)");
	p2 += "zhuzhu";
	cout << p2 << endl;
}