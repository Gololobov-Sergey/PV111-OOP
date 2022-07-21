#pragma once
#include<string>
#include"../Library/Queue.h"

using namespace std;


class TaskPrint
{
	string department;
	string fileName;
	int timePrint = -1;

public:
	TaskPrint() {}
	TaskPrint(string dep, string fName, int tPrint) : 
		department(dep), fileName(fName), timePrint(tPrint) {}

	PRIORITY getPriority() const;

	friend ostream& operator<<(ostream& out, const TaskPrint& tp);

	int getTimePrint() const;

	void setTimePrint(int t);
};


ostream& operator<<(ostream& out, const TaskPrint& tp)
{
	out << setw(10) << left << tp.department << setw(10) << tp.fileName << setw(4) << tp.timePrint;
	return out;
}

PRIORITY TaskPrint::getPriority() const
{
	if(department == "Admin")
		return PRIORITY::SUPERHIGH;
	if (department == "Economist")
		return PRIORITY::HIGH;
	if (department == "Transport")
		return PRIORITY::MEDIUM;
	if (department == "HR")
		return PRIORITY::LOW;
}

int TaskPrint::getTimePrint() const
{
	return timePrint;
}

void TaskPrint::setTimePrint(int t)
{
	timePrint = t;
}

class PrintServer
{
	string ip;
	PriorityQueue<TaskPrint> qPrint;
	Queue<TaskPrint> qLog;
	TaskPrint currentTaskPrint;
	int allTime = 0;

public:
	PrintServer(string ip) : ip(ip) {}

	void addTaskPrint(const TaskPrint& tp);

	void work();
};


void PrintServer::addTaskPrint(const TaskPrint& tp)
{
	qPrint.enqueue(tp, tp.getPriority());
}

void PrintServer::work()
{
	static int time = 0;

	if (currentTaskPrint.getTimePrint() == 0)
	{
		currentTaskPrint.setTimePrint(time);
		qLog.enqueue(currentTaskPrint);
		currentTaskPrint.setTimePrint(-1);
	}

	if (currentTaskPrint.getTimePrint() != -1)
	{
		currentTaskPrint.setTimePrint(currentTaskPrint.getTimePrint() - 1);
	}

	system("cls");
	cout << "PrintServer: " << ip << endl;
	cout << "--------------------------" << endl << endl;
	cout << "Printing:" << endl;
	cout << "--------------------------" << endl;
	if (currentTaskPrint.getTimePrint() != -1)
		cout << currentTaskPrint << endl;
	else
		cout << endl;

	cout << endl;
	cout << "Waiting:                        Printed:" << endl;
	cout << "---------------------------     ---------------------------" << endl;
	qPrint.print();
	qLog.print(32, 9);

	if (!qPrint.isEmpty() && currentTaskPrint.getTimePrint() == -1)
	{
		currentTaskPrint = qPrint.peek();
		time = currentTaskPrint.getTimePrint();
		allTime += time;
		qPrint.dequeue();
	}

	gotoxy(0, 20);
	cout << "------------------------------------------------------------" << endl;
	cout << "Printing " << qLog.length() << " docs, total time: " << allTime << " second" << endl;

}
