#include<iostream>
#include"Student.h"
#include"Point.h"
#include"Time.h"
#include"PhoneBook.h"
#include"Array.h"
#include"../Library/String.h"
#include"Friends.h"
#include"Fraction.h"
#include"var.h"
#include"Apple.h"
#include"../Library/StaticStack.h"
#include"../Library/Stack.h"

using namespace std;

void PRINT(String a)
{
	a.print();
}


//Array foo()
//{
//	Array arr(8);
//	arr.set();
//	arr.print();
//	return arr;
//}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout.setf(ios::boolalpha);

	///// 19.07.2022 ///////////

	Stack<char, 5> st;
	

	st.print();
	st.push(10);
	st.push(5);
	st.push(20);
	st.print();
	cout << st.peek() << endl;
	st.pop();
	st.print();
	st.push(50);
	st.push(50);
	st.push(50);
	st.push(50);
	st.push(50);
	st.push(50);
	st.print();

	Stack<char, 5> st1(st);
	st1.print();


	///// 14.07.2022 ///////

	/*StaticArray<int, 8> arr = {1,2,3,4,5,6,7,8};
	for (size_t i = 0; i < arr.length(); i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;

	StaticArray<float, 8> arr1;

	StaticArray<bool, 8> arr2;

	Repo8<int> r1;
	Repo8<bool> rb;
	for (size_t i = 0; i < 8; i++)
	{
		rb.set(rand()%2, i);
	}
	rb.print();

	rb.set(1, 0);
	rb.print();*/

	/*string d = "";
	cout << sizeof(d) << endl;
	string s("mama");
	cout << s.capacity() << endl;
	string s1 = "mama";
	s.append("+papatttttttttyyyyyyy7777777777777yyy");
	cout << s << endl;
	cout << s.capacity() << endl;
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.max_size() << endl;
	cout << endl;
	s.replace(s.begin(), s.begin() + 20, 1, '0');
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.shrink_to_fit();
	cout << s.capacity() << endl;

	cout << s.substr(2, 6) << endl;*/

	
	
	


	///// 13.07.2022 //////

	/*Fraction f1(1, 2);
	Fraction f2(1, 4);
	Fraction f3 = f1 + f2;
	f3.print();*/


	/*var a = 15;
	var b = "120.25.36Hello0";
	var c = 4.56;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	a = a + b;
	cout << a << endl;*/

	/*Apple a1(20, 0, 0, 0);
	Apple a2(20, 255, 255, 255);
	cout << a1 << endl;
	cout << a2 << endl;
	Apple a3 = a1 + a2;
	cout << a3 << endl;*/


	/*Array<double> a(15);
	a.set();
	a.print();
	printArrayInStarline(a);*/

	///// 12.07.2022 /////

	/*int a;
	cin >> a;
	cin.ignore();
	char buff[80];
	cin.getline(buff, 80);*/

	/*String st1("sdqcg");
	String st2("rgfas34");
	String st = st1 * st2;
	cout << st << endl;*/
	//st2.print();
	//cout << st2 << endl;
	//cin >> st2;
	//cout << st2 << endl;

	/*var a = 15;
	var b = "Hello";
	var c = 4.56;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	a = "120";
	cout << a << endl;*/

	//////// 06.07.2022 /////

	//Array arr(10);
	//arr.set();
	//arr.print();
	//printArrayInStarline(arr);
	////cout << arr.getValueInd(5) << endl;
	//arr[4] = 99;
	//cout << arr["two"] << endl;
	//

	//Point p2(3, 6, 55);
	//p2.print();
	//p2(44, 77);
	//p2.print();

	/*Temperature t(35);
	Humidity h(760);
	WetherInformer(t, h);*/

	//  ::, . , ?:, *, ->, 
	// ++, --, +, - , !, ~
	// =, +, -, *, /, %, +=, -=, *=, /=, %=, ==, <, >, <=, >=, !=, ||, &&, 
	// [], (), type, 

	//Fraction f1(1, 5);
	//Fraction f2(2, 5);
	//Fraction f3 = f1.Sum(f2);
	//Fraction f3 = f1 + f2; // f1.operator+(f2);
	//f3 = -f1;
	//f3 = f1++ + f2;
	//(f1++).print();
	//f1.print();
	//cout << (f1 < f2) << endl;
	//float ff;
	//ff = f1;
	//cout << f1 << endl;
	//int fff = f1;

	/*cout.setf(ios::showpos);
	int v = 99;
	cout << v << endl;*/


	////// 30.06.2022 //////////

	//String st;
	//st.print();
	//String st1(50);
	//st1.print();
	//String st2("mama");
	//st2.print();
	//String st3(st2);
	//st3.print();
	//(3 * st2).print(); // mamamamamama
	//PRINT(st2);

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