#include<iostream>
#include<map>
#include<string>

using namespace std;

template<class Map>
void print_map(Map& m) {
	std::cout << '{';
	for (auto& p : m)
		std::cout << p.first << ": " << p.second << "  ";
	std::cout << "}\n";
}
struct point { double x, y; };
struct PointCmp {
	bool operator()(const point& p1, const point& p2)const { return p1.x < p2.x; }
};
int main() {
	std::map<std::string, int> mpl;
	mpl["something"] = 189;
	mpl["anything"] = 199;
	mpl["that thing"] = 50;
	print_map(mpl);
	
	std::map<std::string, int> iter{ mpl.find("anything"), mpl.end() };
	print_map(iter);

	std::map<std::string, int> copied{ mpl };
	print_map(copied);

	std::map<std::string, int>moved{ std::move(mpl) };
	print_map(moved);

	const std::map<std::string, int> init{
		{"this",100},
		{"can" , 99},
		{"be", 98},
		{"const", 97}
	};
	print_map(init);

	std::map<point, double, PointCmp> mag{
		{{5, -12}, 13},
		{{3, 4}, 5},
		{{-8, -15}, 17}
	};
	std::cout << '\n';
	for(auto p: mag)
		std::cout << "The magnitude of (" << p.first.x
		<< ", " << p.first.y << ") is "
		<< p.second << '\n';

	auto cmpLambda = [](const point& lhs, const point& rhs) {return lhs.y < rhs.y;};     // 将key按poin的y值排序
	std::map<point, double, decltype(cmpLambda)> magy(cmpLambda);
	magy.insert({ {5, -12}, 13 });
	magy.insert({ {3, 4}, 5 });
	magy.insert({ {-8.0, -15.0}, 17.0 });
	std::cout << '\n';
	for (auto p : magy)
		cout << "The magnitude of (" << p.first.x 
		<< ", " << p.first.y << ") is "
		<< p.second << "\n";
}
