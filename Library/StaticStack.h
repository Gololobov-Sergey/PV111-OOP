#pragma once
#include<cassert>

template<class T, size_t size>
class StaticStack
{
	T data[size];
	int top = 0;

public:
	void push(const T& value);
	T peek() const;
	void pop();
	size_t length() const;
	bool isEmpty() const;
	bool isFull() const;
	void clear();
	void print() const;
};

template<class T, size_t size>
void StaticStack<T, size>::push(const T& value)
{
	if (top < size)
	{
		data[top++] = value;
	}
}

template<class T, size_t size>
T StaticStack<T, size>::peek() const
{
	assert(top > 0);
	return data[top - 1];
}

template<class T, size_t size>
void StaticStack<T, size>::pop()
{
	if (top > 0)
		top--;
}

template<class T, size_t size>
size_t StaticStack<T, size>::length() const
{
	return top;
}

template<class T, size_t size>
bool StaticStack<T, size>::isEmpty() const
{
	return top == 0;
}

template<class T, size_t size>
bool StaticStack<T, size>::isFull() const
{
	return top == size;
}

template<class T, size_t size>
void StaticStack<T, size>::clear()
{
	top = 0;
}

template<class T, size_t size>
void StaticStack<T, size>::print() const
{
	for (size_t i = 0; i < top; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
