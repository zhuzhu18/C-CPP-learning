#include "StackOfIntegers.h"

bool StackOfIntegers::empty() {
	return size == 0 ? true : false;
}

int StackOfIntegers::peek() {
	return elements[size - 1];
}

int StackOfIntegers::push(int value) {
	elements[size] = value;
	size++;
	return value;
}
int StackOfIntegers::pop() {
	size--;
	return elements[size];
}
int StackOfIntegers::getSize() {
	return size;
}

StackOfIntegers::StackOfIntegers() {
	for (auto& i : elements) {
		i = 0;
	}
	size = 0;
}