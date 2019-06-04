#include "pch.h"
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string stroke2;// = "Анабель на сEдьмом небе";
	int amount = 0;
	int i = 0;
	bool firstWord = true;

	cout << "Введите предложение: ";
	getline(cin, stroke2);

	for (i; i < stroke2.length(); i++)
	{
		if (stroke2[i] == ' ' || i == 0)
		{
			for (i; i < stroke2.length(); i++)
			{
				if (i == 0 & firstWord)
				{
					i = -1;
					firstWord = false;
				}

				if (int(stroke2[i + 1]) > -33 && int(stroke2[i + 1] < 0))
				{

				}

				else if (stroke2[i + 1] == ' ' || stroke2[i + 1] == '\0' || stroke2[i + 1] == ',' || stroke2[i + 1] == '.')
				{
					amount++;
					if (i == -1)
						i++;
					break;
				}

				else
				{
					if (i == -1)
						i++;
					break;
				}
			}
		}
	}

	cout << "Количество слов исключительно со строчными буквами: " << amount;
}
