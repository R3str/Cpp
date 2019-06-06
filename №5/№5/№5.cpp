#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int read;

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
			fon << mas[i][0] << " " << mas[i][3] << " " << mas[i][6] << " "
				<< mas[i][1] << " " << mas[i][4] << " " << mas[i][7] << " "
				<< mas[i][2] << " " << mas[i][5] << " " << mas[i][8] << endl;
		}
	}

	fon.close();

	/////Освобождение занятой памяти/////

	for (int i = 0; i < amount; i++)
		delete[] mas[i];

	delete[] mas;
	delete[] sum;
}
