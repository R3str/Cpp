#include "pch.h"
#include <iostream>
#include <windows.h>
using namespace std;

struct stationary_telephone
{
	char second_name[20];
	char name[20];
	char middle_name[20];
	char country[20];
	char region[20];
	char area[20];
	char city[20];
	char street[20];
	int house;
	int door;
	int telephone;
};

	// Проверка на наличие маленьких букв в начале (поддержка русского и английского языка)
void check(stationary_telephone* user, int n)
{
	for (int i = n-1; i <= n-1; i++)
	{
		if (96 < int(user[i].second_name[0]) && int(user[i].second_name[0]) < 123 || 
			-33 < int(user[i].second_name[0]) && int(user[i].second_name[0]) < 0)
			user[i].second_name[0] = int(user[i].second_name[0]) - 32;

		if (96 < int(user[i].name[0]) && int(user[i].name[0]) < 123 ||
			-33 < int(user[i].name[0]) && int(user[i].name[0]) < 0)
			user[i].name[0] = int(user[i].name[0]) - 32;

		if (96 < int(user[i].middle_name[0]) && int(user[i].middle_name[0]) < 123 ||
			-33 < int(user[i].middle_name[0]) && int(user[i].middle_name[0]) < 0)
			user[i].middle_name[0] = int(user[i].middle_name[0]) - 32;

		if (96 < int(user[i].country[0]) && int(user[i].country[0]) < 123 ||
			-33 < int(user[i].country[0]) && int(user[i].country[0]) < 0)
			user[i].country[0] = int(user[i].country[0]) - 32;

		if (96 < int(user[i].region[0]) && int(user[i].region[0]) < 123 ||
			-33 < int(user[i].region[0]) && int(user[i].region[0]) < 0)
			user[i].region[0] = int(user[i].region[0]) - 32;

		if (96 < int(user[i].area[0]) && int(user[i].area[0]) < 123 ||
			-33 < int(user[i].area[0]) && int(user[i].area[0]) < 0)
			user[i].area[0] = int(user[i].area[0]) - 32;

		if (96 < int(user[i].city[0]) && int(user[i].city[0]) < 123 ||
			-33 < int(user[i].city[0]) && int(user[i].city[0]) < 0)
			user[i].city[0] = int(user[i].city[0]) - 32;

		if (96 < int(user[i].street[0]) && int(user[i].street[0]) < 123 ||
			-33 < int(user[i].street[0]) && int(user[i].street[0]) < 0)
			user[i].street[0] = int(user[i].street[0]) - 32;
	}
}

	// Ввод базы
void Input(int n, stationary_telephone* user)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl << "\tПользователь №" << i + 1 << endl;

		cout << "Фамилия: ";
		cin >> user[i].second_name;

		cout << "Имя: ";
		cin >> user[i].name;
		
		cout << "Отчество: ";
		cin >> user[i].middle_name;
		
		cout << "Страна: ";
		cin >> user[i].country;

		cout << "Регион: ";
		cin >> user[i].region;

		cout << "Район: ";
		cin >> user[i].area;

		cout << "Город: ";
		cin >> user[i].city;

		cout << "Улица: ";
		cin >> user[i].street;

		cout << "Дом: ";
		cin >> user[i].house;

		cout << "Квартира: ";
		cin >> user[i].door;

		cout << "Номер телефона: ";
		cin >> user[i].telephone;
		
		check(user, n);
	}
}

	// Вывод базы
void Output(int n, stationary_telephone* user)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl << "\tПользователь №" << i + 1;

		cout << endl << "Фамилия: ";
		cout << user[i].second_name;

		cout << endl << "Имя: ";
		cout << user[i].name;

		cout << endl << "Отчество: ";
		cout << user[i].middle_name;

		cout << endl << "Страна: ";
		cout << user[i].country;

		cout << endl << "Регион: ";
		cout << user[i].region;

		cout << endl << "Район: ";
		cout << user[i].area;

		cout << endl << "Город: ";
		cout << user[i].city;

		cout << endl << "Улица: ";
		cout << user[i].street;

		cout << endl << "Дом: ";
		cout << user[i].house;

		cout << endl << "Квартира: ";
		cout << user[i].door;

		cout << endl << "Номер телефона: ";
		cout << user[i].telephone;
	}
}

	// Увеличение базы
void Resize(int n, stationary_telephone* user, int choise)
{
	for (int i = n; i < choise; i++)
	{
		cout << endl << endl << "\tПользователь №" << i + 1 << endl;

		cout << "Фамилия: ";
		cin >> user[i].second_name;

		cout << "Имя: ";
		cin >> user[i].name;

		cout << "Отчество: ";
		cin >> user[i].middle_name;

		cout << "Страна: ";
		cin >> user[i].country;

		cout << "Регион: ";
		cin >> user[i].region;

		cout << "Район: ";
		cin >> user[i].area;

		cout << "Город: ";
		cin >> user[i].city;

		cout << "Улица: ";
		cin >> user[i].street;

		cout << "Дом: ";
		cin >> user[i].house;

		cout << "Квартира: ";
		cin >> user[i].door;

		cout << "Номер телефона: ";
		cin >> user[i].telephone;
	}

	choise -= n;
	n += choise;

	check(user, n);
}

	// Нахождения элемента/пользователя базы
void Find(stationary_telephone* user, int choise)
{
	cout << endl << endl << "\tПользователь №" << choise+1;

	cout << endl << "Фамилия: ";
	cout << user[choise].second_name;

	cout << endl << "Имя: ";
	cout << user[choise].name;

	cout << endl << "Отчество: ";
	cout << user[choise].middle_name;

	cout << endl << "Страна: ";
	cout << user[choise].country;

	cout << endl << "Регион: ";
	cout << user[choise].region;

	cout << endl << "Район: ";
	cout << user[choise].area;

	cout << endl << "Город: ";
	cout << user[choise].city;

	cout << endl << "Улица: ";
	cout << user[choise].street;

	cout << endl << "Дом: ";
	cout << user[choise].house;

	cout << endl << "Квартира: ";
	cout << user[choise].door;

	cout << endl << "Номер телефона: ";
	cout << user[choise].telephone;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	int n = 0, choise = 0;

	cout << "Введите размер базы: ";
	cin >> n;

	stationary_telephone* user = new stationary_telephone[n];

	Input(n, user);

	link:
	cout << endl << endl << "Что желаете делать дальше?\n\t1 — увеличить базу\n\t2 — просмотреть содержимое базы\n\t3 — поиск пользователя по его порядковому номеру\n\t4 — закрыть программу\n";
	cin >> choise;

	if (choise == 1)
	{
		cout << "Сколько пользователей хотите добавить? ";
		cin >> choise;
		choise += n;
		Resize(n, user, choise);
		choise -= n;
		n += choise;
		goto link;
	}

	else if (choise == 2)
	{
		Output(n, user);
		goto link;
	}

	else if (choise == 3)
	{
		cout << "Какого пользователя желаете просмотреть? ";
		cin >> choise;
		choise--;
		Find(user, choise);
		goto link;
	}

	else if (choise == 4)
	{
		return 0;
	}

	else
		cout << endl << "Что-то пошло не так =( Попробовать еще раз?\n\t1 — да\n\t2 — нет ";
	cin >> choise;

	if (choise == 1)
		goto link;

	else
		return 0;

}
