#pragma once
#include"../Library/Menu.h"

class Abonent
{
	char* FIO;
	char* phone;
	char* info;
};


class PhoneBook
{
	Abonent* abonents;
	int size;

public:
	PhoneBook() {}
	void menu();
	void addAbonent();

};

void PhoneBook::menu()
{
	while (true)
	{
		system("cls");
		
		int c = Menu::select_vertical({ "Додати", "Видалити", "Друк", "Вихід" }, HorizontalAlignment::Center, 5);
		switch (c)
		{
		case 3:
			exit(0);
		default:
			break;
		}
	}
}