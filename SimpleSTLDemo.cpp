#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;
int main() {
	vector<int> vec1, vec2;
	list<int> ls1, ls2;
	deque<int>deque1, deque2;
	set<int>set1, set2;
	multiset<int>multiset1, multiset2;
	stack<int>stack1, stack2;
	queue<int>queue1, queue2;

	cout << "Vector:" << endl;
	vec1.push_back(1);
	vec1.push_back(2);
	vec2.push_back(30);
	cout << "vec1's size: " << vec1.size() << endl;
	cout << "vec2's size: " << vec2.size() << endl;
	cout << "maximum size of vec1: " << vec1.max_size() << endl;
	cout << "maximum size of vec2: " << vec2.max_size() << endl;
	vec1.swap(vec2);
	cout << "vec1's size: " << vec1.size() << endl;
	cout << "vec2's size: " << vec2.size() << endl;
}