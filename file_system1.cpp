#include<iostream>
#include<vector>
#include<boost\filesystem.hpp>

using namespace std;
using namespace boost::filesystem;
int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Usage: tut1 path\n";
		return 1;
	}
	path p{ argv[1] };
	try {
		if (exists(p)) {
			if (is_regular_file(p))
				cout << "file size:  " << file_size(p) << endl;
			else if (is_directory(p)) {
				cout << p << " contains these files:" << "\n";
				std::vector<path> v;
				for (auto u = directory_iterator(p);u != directory_iterator();u++) {
					v.push_back(u->path());
				}
				std::sort(v.begin(), v.end());
				for (auto w : v)
					cout << w.filename() << endl;
			}
			else
				cout << p << " is neither a directory nor a file" << endl;
			}
		}
	catch (const filesystem_error& e) {
		cout << e.what() << endl;
	}
}
