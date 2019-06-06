#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int read;
	int amountOfNotEven = 0;

	ifstream fin("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№5\\data.txt");
	fin >> read;

	const int amount = read;
	const int cols = 9;

	int *sum = new int[amount];

	for (int i = 0; i < amount; i++)
		sum[i] = 0;

	int **mas = new int* [amount];

	for (int i = 0; i < amount; i++)
		mas[i] = new int[cols];

	for (int i = 0; i < amount; i++)
		for (int j = 0; j < cols; j++)
			fin >> mas[i][j];

	fin.close();

	ofstream fon("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№5\\notEven.txt");
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < cols; j += 4)
			sum[i] += mas[i][j];

		if (sum[i] % 2 != 0)
		{
			amountOfNotEven++;
			if (i == amount - 1)
			{
				fon << amountOfNotEven << endl;
					for (int i = 0; i < amountOfNotEven; i++)
						fon << mas[i][0] << " " << mas[i][3] << " " << mas[i][6] << " "
						    << mas[i][1] << " " << mas[i][4] << " " << mas[i][7] << " "
						    << mas[i][2] << " " << mas[i][5] << " " << mas[i][8] << endl;
			}
		}
	}

	fon.close();

	fin.open("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№5\\data.txt");
	cout << "\t1-ый файл:" << endl;
	fin >> read;
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			fin >> mas[i][j];
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	fin.close();

	ifstream fon2("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№5\\notEven.txt");
	cout << "\t2-ой файл:" << endl;
	fon2 >> read;
	for (int i = 0; i < amountOfNotEven; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			fon2 >> mas[i][j];
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	fon2.close();

	/////Освобождение занятой памяти/////

	for (int i = 0; i < amount; i++)
		delete[] mas[i];

	delete[] mas;
	delete[] sum;
}
