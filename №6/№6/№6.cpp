#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct userAdd
{
	string Fio;
	double Pay;
	int PaidMonth;
	int PrepaidMonth;

	userAdd()
	{
		Fio = "NaN";
		Pay = -1;
		PaidMonth = -1;
		PrepaidMonth = -1;
	}

	userAdd(string fio, int pay, int paidMonth, int prepaidMonth)
	{
		Fio = fio;
		Pay = pay;
		PaidMonth = paidMonth;
		PrepaidMonth = prepaidMonth;
		if (prepaidMonth > 4)
			Pay *= 0.93;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	const int amount = 10;

	userAdd user[amount];

	/*user[0] = { "one", 50, 10, 3 };
	user[1] = { "two", 45, 26, 7 };
	user[2] = { "three", 48, 19, 3 };
	user[3] = { "four", 43, 17, 6 };
	user[4] = { "five", 57, 4, 1 };
	user[5] = { "six", 49, 14, 0 };
	user[6] = { "seven", 53, 32, 6 };
	user[7] = { "eight", 48, 7, 0 };
	user[8] = { "nine", 55, 14, 11 };
	user[9] = { "ten", 57, 1, 8 };

	ofstream fon("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№6\\data.txt", ios::binary);
	for (int i = 0; i < amount; i++)
	{
		fon.write((char*)&user[i].Fio, sizeof(user[i].Fio));
		fon.write((char*)&user[i].Pay, sizeof(user[i].Pay));
		fon.write((char*)&user[i].PaidMonth, sizeof(user[i].PaidMonth));
		fon.write((char*)&user[i].PrepaidMonth, sizeof(user[i].PrepaidMonth));
	}	
	fon.close();*/

	ifstream fin("C:\\Users\\Рабочий стол\\source\\repos\\Cpp\\№6\\data.txt", ios::binary);
	for (int i = 0; i < amount; i++)
	{
		fin.read((char*)&user[i].Fio, sizeof(user[i].Fio));
		fin.read((char*)&user[i].Pay, sizeof(user[i].Pay));
		fin.read((char*)&user[i].PaidMonth, sizeof(user[i].PaidMonth));
		fin.read((char*)&user[i].PrepaidMonth, sizeof(user[i].PrepaidMonth));
	}
	
	for (int i = 0; i < amount; i++)
	{
		cout << "\t№" << i + 1 << endl;
		cout << "ФИО: " << user[i].Fio << endl;
		cout << "Оплата: " << user[i].Pay << endl;
		cout << "Кол-во оплаченых месяцев: " << user[i].PaidMonth << endl;
		cout << "Кол-во оплаченых наперед месяцев: " << user[i].PrepaidMonth << endl << endl;
	}
}
