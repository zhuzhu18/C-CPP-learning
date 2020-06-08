#include <iostream>

using namespace std;
int main() {
	ofstream output{ "scores.txt" };
	output << "zhuzhihua  " << 98 << endl;
	output << "liwenjuan  " << 100 << endl;
	cout << "文件的大小：" << fs::file_size(p) << endl;
	auto* p = cin.rdbuf();
	cout << cin.peek() << endl;
	static int i{ 0 };
	auto count = p->in_avail();
	for (;i < count;i++) {
		cout << i + 1 << ": " << (cin.get()) << endl;;
	}
}
