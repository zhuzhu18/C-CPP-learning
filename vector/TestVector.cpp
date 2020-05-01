#include <vector>
#include <string>
#include "Helper.h"

int main() {
	std::vector<std::string> words1{"Hello", "World!", "Welcome", "To", "C!"};
	PRINT(words1);

	words1.erase(words1.end() - 1);        // 删除最后一个元素
	PRINT(words1);

	words1.push_back("C++!");              // 添加一个元素到最后
	PRINT(words1);

	std::vector words2( words1.begin()+2, words1.end() );          // 用words1的部分内容拷贝构造words2
	PRINT(words2);

	words2.insert(words2.begin(), "Hello!");            // 在words2的头部插入"Hello!"
	PRINT(words2);

	std::vector words3{ words2 };
	words3[3] = "C PLUS PLUS";              // 修改第三号位置的元素
	PRINT(words3);

	std::vector<std::string> words4(4, "C++");           // 创建4个相同元素组成的vector
	PRINT(words4);

	words3.swap(words4);              // 交换words3和words4
	PRINT(words3);
	PRINT(words4);
}
