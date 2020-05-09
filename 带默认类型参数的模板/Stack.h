#pragma once

template<int N, typename T=char>             // 模板类的声明和实现必须放在同一个文件中
class Stack {
private:
	T elements[N];
	int size{ 0 };
public:
	bool empty();
	T peek();
	T push(T value);
	T pop();
	int getSize();
	Stack();
};

template<int N, typename T>
bool Stack<N, T>::empty() {
	return size == 0 ? true : false;
}

template<int N, typename T>
T Stack<N, T>::peek() {
	return elements[size - 1];
}

template<int N, typename T>
T Stack<N, T>::push(T value) {
	elements[size] = value;
	size++;
	return value;
}

template<int N, typename T>
T Stack<N, T>::pop() {
	size--;
	return elements[size];
}

template<int N, typename T>
int Stack<N, T>::getSize() {
	return size;
}

template<int N, typename T>
Stack<N, T>::Stack() {
	for (auto& i : elements) {
		i = 0;
	}
	size = 0;
}