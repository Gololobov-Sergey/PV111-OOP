#pragma once
#include<iostream>
#include<iomanip>
#include<cassert>


using namespace std;



template<class T>
class Array
{

	T* arr;
	int size;

public:
	Array() : Array(10) {}
	explicit Array(int size) : size(size)
	{
		arr = new T[size];
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
		arr = new T[size];
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
			cout << setw(4) << arr[i];
		}
		cout << endl;
	}
	
	T& operator[](int ind)
	{
		assert(ind >= 0 && ind < size);
		return arr[ind];
	}

	T& operator[](const char* name)
	{
		if (strcmp(name, "one") == 0)
			return arr[0];
		if (strcmp(name, "two") == 0)
			return arr[1];
	}

	/*void setValueInd(int value, int ind)
	{
		if (ind >= 0 && ind < size)
			arr[ind] = value;
	}

	int& getValueInd(int ind)
	{
		assert(ind >= 0 && ind < size);
		return arr[ind];
	}*/

	template<class T>
	friend void printArrayInStarline(Array<T>& arr);
};


template<>
void Array<double>::set(int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (rand() % (10*max - 10*min + 1) + min)/10.;
	}
}

template<class T>
void printArrayInStarline(Array<T>& arr)
{
	int n = 4 * arr.size;
	for (size_t i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (size_t i = 0; i < arr.size; i++)
	{
		cout << setw(4) << arr.arr[i];
	}
	cout << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
}