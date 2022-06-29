#include<iostream>
#include"Student.h"
#include"Point.h"
#include"Time.h"
#include"PhoneBook.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	PhoneBook phonebook;
	phonebook.menu();



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
	//student.print();
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