#include "pch.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct queue
{
	string mas[1000];
	int head = 0;
	int tail = 0;

	void push(string x)
	{
		mas[tail] = x;
		tail++;
	}

	void delet()
	{
		mas[--tail] = "";
	}

	void output()
	{
		for(int i = 0; i < tail; i++)
		cout << mas[i] << " ";
		cout << endl;
	}

};

int main()
{
	int sum = 0;
	char mas[1000];
	int k = 0;
	setlocale(LC_ALL, "ru");

	queue queue0;
	queue0.push("one");
	queue0.push("two");
	queue0.push("three");
	queue0.push("four");

	cout << "Начальная очередь: ";
	queue0.output();

	queue0.delet();

	queue0.push("five");

	cout << "Очередь после изменений: ";
	queue0.output();

	for (int i = 0; i < queue0.tail; i++)
		sum += queue0.mas[i].length();
	cout << "Кол-во символов данной очереди: " << sum;
}
