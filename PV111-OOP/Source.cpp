#include<iostream>
#include"Student.h"

using namespace std;

int main()
{

	Student student;
	student.setName("Sergiy");
	student.setAge(25);
	student.print();

	Student* student2 = new Student;
	student2->setAge(30);

	Student st[3];
	st[0].print();
	

	cout << sizeof(Student) << endl;

	system("pause");
}