#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	string ap;
	int numberWords;	
	char even[20];
	char notEven[20];
	
	int count = 0;
	int position = 0;
	int evenPosition = 0;
	int notEvenPosition = 0;

	cout << "Ваша строка: " << ap << endl;

	getline(std::cin, ap);

	while (ap.length() > 17)
	{
		cout << "Вы ввели больше 17 элементов!\n";
		getline(std::cin, ap);
	}

	while (ap.length() < 17)
	{
		cout << "Вы ввели меньше 17 элементов!\n";
		getline(std::cin, ap);
	}
// Определение и запись четных/нечетных слов в соответствующие массивы
	for (int i = 0; i <= ap.length(); i++)
	{
		if (ap[i] == ' ' || ap[i] == '\0')
		{
			count++;
			if (count % 2 == 0)
			{
				do
				{
					even[evenPosition++] = ap[position++];
				} while (ap[position - 1] != ' ' && ap[position - 1] != '\0');
				even[evenPosition - 1] = ' ';
				even[evenPosition] = '\0';
			}

			if (count % 2 != 0)
			{
				do
				{
					notEven[notEvenPosition++] = ap[position++];
				} while (ap[position - 1] != ' ' && ap[position - 1] != '\0');
				notEven[notEvenPosition - 1] = ' ';
				notEven[notEvenPosition] = '\0';
			}


		}
	}


// Смена четных/нечетных слов местами
	numberWords = count;
	count = 0;
	position = 0;
	evenPosition = 0;
	notEvenPosition = 0;

	for (int i = 0; i <= numberWords; i++)
	{
		count++;
		if (count % 2 == 0)
		{
			do
			{
				if (notEven[notEvenPosition] != '\0')
				ap[position++] = notEven[notEvenPosition++];
			} while (notEven[notEvenPosition-1] != ' ' && notEven[notEvenPosition-1] != '\0');
		}

		if (count % 2 != 0)
		{
			do
			{
				if(even[evenPosition] != '\0')
				ap[position++] = even[evenPosition++];
			} while (even[evenPosition-1] != ' ' && even[evenPosition-1] != '\0');
		}
	}

// Смена верхного регистра на нижний и начало с большого регистра 
	for (int i = 0; i < 17; i++)
	{
		if (int(ap[i]) > -65 && int(ap[i]) < -34)
			ap[i] += 32;
	}
	ap[0] -= 32;

	cout << "Строка со сменой четных/нечетных слов: " << ap << endl;
}
