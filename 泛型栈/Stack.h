#pragma once

template<typename T>             // 模板类的声明和实现必须放在同一个文件中
class Stack {
private:
	T elements[100];
	int size{ 0 };
public:
	bool empty();
	T peek();
	T push(T value);
	T pop();
	int getSize();
	Stack();
};

template<typename T>
bool Stack<T>::empty() {
	return size == 0 ? true : false;
}

template<typename T>
T Stack<T>::peek() {
	return elements[size - 1];
}

template<typename T>
T Stack<T>::push(T value) {
	elements[size] = value;
	size++;
	return value;
}

template<typename T>
T Stack<T>::pop() {
	size--;
	return elements[size];
}

template<typename T>
int Stack<T>::getSize() {
	return size;
}

template<typename T>
Stack<T>::Stack() {
	for (auto& i : elements) {
		i = 0;
	}
	size = 0;
}
