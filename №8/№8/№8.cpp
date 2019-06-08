#include "pch.h"
#include <iostream>
using namespace std;

struct element	//Структура со значением и адресом елемента
{
	int x;
	element *Next;
};

class List
{
	element *Head;
public:
	List() { Head = NULL; }
	~List();
	void Add(int x);
	void Show();
};

List::~List()	//Деструктор (освобождение памяти от списка)
{
	while (Head != NULL)
	{
		element *temp = Head->Next;
		delete Head;
		Head = temp;
	}
}

void List::Add(int x)	//Добваление элемента в список
{
	element *temp = new element;
	temp->x = x;
	temp->Next = Head;
	Head = temp;
}

void List::Show()	//Показ всего списка с корректировкой (замена след. от отрицательного элемента на значение '10')
{
	element *temp = Head;


	while (temp != NULL)
	{
		if (temp->x < 0)
		{
			int i = 0;
			while (i != 1)
			{
				cout << temp->x << " ";
				temp = temp->Next;
				i++;
			}temp->x = 10;
		}
		cout << temp->x << " ";
		temp = temp->Next;
	}
}

int main()
{
	List lst;

	lst.Add(46);
	lst.Add(25);
	lst.Add(-4);
	lst.Add(29);
	lst.Add(-27);
	lst.Add(36);
	lst.Add(54);

	lst.Show();
}
