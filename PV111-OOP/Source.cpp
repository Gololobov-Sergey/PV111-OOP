#include<iostream>
#include"Student.h"

using namespace std;

int main()
{

	Student student("Sergiy", 30);
	//student.setName("Sergiy");
	//student.setAge(25);
	student.addMark(0);
	student.addMark(10);
	student.addMark(100);
	student.addMark(12);
	student.print();

	Student* student2 = new Student[3];
	student2[0].setAge(30);
	delete[] student2;


	/*Student st[3];
	st[0].print();
	

	cout << sizeof(Student) << endl;*/

	system("pause");
}