#pragma once

template<class T, size_t size>
class DynamicStack
{
	T* data = nullptr;
	int top = 0;

public:
	~DynamicStack();
	DynamicStack(const DynamicStack& st);
	DynamicStack& operator=(const DynamicStack& st);
	void push(const T& value);
	T peek() const;
	void pop();
	int length() const;
	bool isEmpty() const;
	bool isFull() const;
	void clear();
	void print() const;
};

