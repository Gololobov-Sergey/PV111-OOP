#pragma once
#include"../Library/Menu.h"
#include"../Library/Functions.h"



class Abonent
{
	char* FIO = nullptr;
	char* phone = nullptr;
	char* info = nullptr;

public:
	Abonent() {}
	Abonent(const Abonent& obj);
	~Abonent();
	Abonent& operator=(const Abonent& obj);
	void setFIO();
	void setFIO(const char* fio);
	void setPhone();
	void setPhone(const char* phone);
	void setInfo();
	void setInfo(const char* info);
	void print();
	string toString();
};


Abonent& Abonent::operator=(const Abonent& obj)
{
	if (this == &obj)
		return *this;

	/*if (FIO) delete FIO;
	if (phone) delete phone;
	if (info) delete info;*/

	setFIO(obj.FIO);
	setPhone(obj.phone);
	setInfo(obj.info);

	return *this;

}

Abonent::Abonent(const Abonent& obj)
{
	setFIO(obj.FIO);
	setPhone(obj.phone);
	setInfo(obj.info);
}

inline Abonent::~Abonent()
{
	delete FIO;
	delete phone;
	delete info;
}

void Abonent::setFIO()
{
	char buff[80];
	cout << "Enter FIO: ";
	cin.getline(buff, 80);
	setFIO(buff);
}

void Abonent::setFIO(const char* fio)
{
	if (FIO)
		delete FIO;
	int len = strlen(fio) + 1;
	FIO = new char[len];
	strcpy_s(FIO, len, fio);
}

void Abonent::setPhone()
{
	char buff[80];
	cout << "Enter Phone: ";
	cin.getline(buff, 80);
	setPhone(buff);
}

void Abonent::setPhone(const char* phone)
{
	if (this->phone)
		delete this->phone;
	int len = strlen(phone) + 1;
	this->phone = new char[len];
	strcpy_s(this->phone, len, phone);
}

void Abonent::setInfo()
{
	char buff[80];
	cout << "Enter Info: ";
	cin.getline(buff, 80);
	setInfo(buff);
}

void Abonent::setInfo(const char* info)
{
	if (this->info)
		delete this->info;
	int len = strlen(info) + 1;
	this->info = new char[len];
	strcpy_s(this->info, len, info);
}

void Abonent::print()
{
	cout << setw(15) << left << FIO << setw(15) << phone << " " << info << endl;
} 

string Abonent::toString()
{
	return (string)FIO + " " + (string)phone + " " + (string)info;
}

class PhoneBook
{
	Abonent* abonents = nullptr;
	int size = 0;

public:
	PhoneBook() {}
	~PhoneBook()
	{
		delete[] abonents;
	}
	void menu();
	void addAbonent();
	void delAbonent();
	void print();
	
};

void PhoneBook::menu()
{
	while (true)
	{
		system("cls");
		
		int c = Menu::select_vertical({ "Додати", "Видалити", "Друк", "Вихід" }, HorizontalAlignment::Center, 5);
		switch (c)
		{
		case 0:
			addAbonent();
			break;
		case 1:
			delAbonent();
			break;
		case 2:
			print();
			break;
		case 3:
			exit(0);
		default:
			break;
		}
	}
}

void PhoneBook::print()
{
	system("cls");
	cout << "------ALL CONTACT------ " << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << setw(4) << i + 1;
		abonents[i].print();
	}
	system("pause");
}

void PhoneBook::addAbonent()
{
	Abonent abonent;
	abonent.setFIO();
	abonent.setPhone();
	abonent.setInfo();
	addElemArray(abonents, size, abonent);
}

void PhoneBook::delAbonent()
{
	vector<string> delList;
	for (size_t i = 0; i < size; i++)
	{
		delList.push_back(to_string(i + 1) + abonents[i].toString());
	}
	int ind = Menu::select_vertical(delList, HorizontalAlignment::Left, 2);
	delElemArray(abonents, size, ind);
}