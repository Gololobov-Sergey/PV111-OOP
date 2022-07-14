#pragma once
#include<iostream>

using namespace std;


class Matrix
{

public:
	Matrix(int r, int c);
	~Matrix();
	Matrix(const Matrix& m);
	Matrix& operator=(const Matrix& m);
	friend ofstream& operator<<(ofstream& out, const Matrix& m);
	void set(int min = 0, int max = 9);
	void addRow(int pos, int* arr = nullptr);
	void delRow(int pos);
	void addColumn(int pos);
	void delColumn(int pos);
	void sortByRow();
	void transform();
	Matrix operator+(const Matrix& m);
	Matrix operator*(int scalar);

};

// окрема реазізація для set<char>  --> A...Z