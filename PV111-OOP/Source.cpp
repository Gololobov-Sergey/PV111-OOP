#include<iostream>
#include"Student.h"
#include"Point.h"
#include"Time.h"
#include"PhoneBook.h"
#include"Array.h"
#include"../Library/String.h"
#include"Friends.h"
#include"Fraction.h"

using namespace std;

void PRINT(String a)
{
	a.print();
}


Array foo()
{
	Array arr(8);
	arr.set();
	arr.print();
	return arr;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout.setf(ios::boolalpha);




	//////// 06.07.2022 /////

	Array arr(10);
	arr.set();
	arr.print();
	printArrayInStarline(arr);
	//cout << arr.getValueInd(5) << endl;
	arr[4] = 99;
	cout << arr["two"] << endl;
	

	Point p2(3, 6, 55);
	p2.print();
	p2(44, 77);
	p2.print();

	/*Temperature t(35);
	Humidity h(760);
	WetherInformer(t, h);*/

	//  ::, . , ?:, *, ->, 
	// ++, --, +, - , !, ~
	// =, +, -, *, /, %, +=, -=, *=, /=, %=, ==, <, >, <=, >=, !=, ||, &&, 
	// [], (), 

	//Fraction f1(1, 5);
	//Fraction f2(2, 5);
	//Fraction f3 = f1.Sum(f2);
	//Fraction f3 = f1 + f2; // f1.operator+(f2);
	//f3 = -f1;
	//f3 = f1++ + f2;
	//(f1++).print();
	//f1.print();
	//cout << (f1 < f2) << endl;

	/*cout.setf(ios::showpos);
	int v = 99;
	cout << v << endl;*/


	////// 30.06.2022 //////////

	/*String st;
	st.print();
	String st1(50);
	st1.print();
	String st2("mama");
	st2.print();
	String st3(st2);
	st3.print();

	PRINT(st2);*/

	//{

	//	Array arr(8);
	//	arr.set();
	//	arr.print();

	//	//1
	//	PRINT(arr);
	//	arr.print();

	//	//2
	//	//Array arr2(arr);
	//	//arr.print();

	//	//3
	//	//Array arr3 = foo();
	//	//Array arr3 = arr4;
	//	//Array arr3;
	//  //arr3 = arr2;
	//	//arr3 = arr3 = arr2 = arr1;
	// 
	// 
	//	//arr3.print();
	//}


	//PhoneBook phonebook;
	//phonebook.menu();



	/*int a1 = 9.3;
	int a2(9.3);
	int a3{ (int)9.3 };

	int s = Sum(a1, a2);

	const int d(9);

	cout << Point::getCount() << endl;

	const Point p1;
	p1.print();
	cout << Point::getCount() << endl;

	{
		Point p2(3, 6, 55);
		p2.print();
		cout << Point::getCount() << endl;
	}

	cout << Point::getCount() << endl;*/

	//p2.z = 555;
	//cout << Point::getZ() << endl;
	//cout << p2.getZ() << endl;

	//Time t1;
	//Time t2(20);
	//Time t3(10, 20);
	//Time t4(3, 10, 20);


	//Student student("Sergiy", 30);
	//student.print(); // print(student)  //print(this)
	//student.setName("Sergiy");
	//student.setAge(25);
	/*student.addMark(0);
	student.addMark(10);
	student.addMark(100);
	student.addMark(12);
	student.print();

	Student* student2 = new Student[3];
	student2[0].setAge(30);
	delete[] student2;*/


	/*Student st[3];
	st[0].print();


	cout << sizeof(Student) << endl;*/

	system("pause");
}