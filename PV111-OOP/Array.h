#pragma once
#include<iostream>
#include<iomanip>


using namespace std;


class Array
{

	int* arr;
	int size;

public:
	Array() : Array(10) {}
	explicit Array(int size) : size(size)
	{
		arr = new int[size];
		cout << "Constr" << endl;
	}

	~Array()
	{
		delete[] arr;
		cout << "Destr" << endl;
	}

	Array(const Array& obj)
	{
		size = obj.size;
		arr = new int[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = obj.arr[i];
		}
		cout << "Constr Copy" << endl;
	}

	void set(int min = 0, int max = 9)
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % (max - min + 1) + min;
		}
	}

	void print()
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << setw(3) << arr[i];
		}
		cout << endl;
	}
	
	friend void printArrayInStarline(Array& arr);
};


void printArrayInStarline(Array& arr)
{
	int n = 3 * arr.size;
	for (size_t i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (size_t i = 0; i < arr.size; i++)
	{
		cout << setw(3) << arr.arr[i];
	}
	cout << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
}