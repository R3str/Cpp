#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	char arr[17]{ "Один дом на луне" };
	int numberWords;
	char even[20];
	char notEven[20];
	
	int count = 0;
	int position = 0;
	int evenPosoition = 0;
	int notEvenPosition = 0;

	cout << "Ваша строка: " << arr << endl;

// Определение и запись четных/нечетных слов в соответствующие массивы
	for (int i = 0; i < 17; i++)
	{
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			count++;
			if (count % 2 == 0)
			{
				do
				{
					even[evenPosoition++] = arr[position++];
				} while (arr[position - 1] != ' ' && arr[position - 1] != '\0');
				even[evenPosoition-1] = ' ';
				even[evenPosoition] = '\0';
			}

			if (count % 2 != 0)
			{
				do
				{
					notEven[notEvenPosition++] = arr[position++];
				} while (arr[position - 1] != ' ' && arr[position - 1] != '\0');
				notEven[notEvenPosition - 1] = ' ';
				notEven[notEvenPosition] = '\0';
			}
		}
	}


// Смена четных/нечетных слов местами
	numberWords = count;
	count = 0;
	position = 0;
	evenPosoition = 0;
	notEvenPosition = 0;

	for (int i = 0; i < numberWords; i++)
	{
		count++;
		if (count % 2 == 0)
		{
			do
			{
				arr[position++] = notEven[notEvenPosition++];
			} while (notEven[notEvenPosition-1] != ' ' && notEven[notEvenPosition-1] != '\0');
		}

		if (count % 2 != 0)
		{
			do
			{
				arr[position++] = even[evenPosoition++];
			} while (even[evenPosoition-1] != ' ' && even[evenPosoition-1] != '\0');
		}
	}

// Указываем конец строки
	arr[16] = '\0';

// Смена верхного регистра на нижний и начало с большого регистра 
	for (int i = 0; i < 16; i++)
	{
		if (int(arr[i]) > -65 && int(arr[i]) < -34)
			arr[i] += 32;
	}
	arr[0] -= 32;

	cout << "Строка со сменой четных/нечетных слов: " << arr << endl;
}
