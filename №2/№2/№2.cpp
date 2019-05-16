#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct stationary_telephone
{
	string second_name = "\0";
	string name = "\0";
	string middle_name = "\0";
	string country = "\0";
	string region = "\0";
	string area = "\0";
	string city = "\0";
	string street = "\0";
	int house = 0;
	int door = 0;
	int telephone = 0;
};

	// Проверка на наличие маленьких букв в начале (поддержка русского и английского языка)
char checkRegister(int n, char s)
{
		if (96 < int(s) && int(s) < 123 ||
			-33 < int(s) && int(s) < 0)
			s -= 32;
		return s;
}
	// Проверка на корректный ввод для типа string и int
string check(string s)
{
	if (s == "string")
	{
		cin >> s;
		while (!atoi(s.c_str()) <= 0)
		{
			cout << "Некорректыне данные! Попробуйте еще раз ";
			cin >> s;
		}
	}

	if (s == "int")
	{
		cin >> s;
		while (atoi(s.c_str()) <= 0)
		{
			cout << "Некорректыне данные! Попробуйте еще раз ";
			cin >> s;
		}
	}
	return s;
}

	// Ввод базы
void Input(int n, stationary_telephone* user)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl << "\tПользователь №" << i + 1 << endl;
		
		cout << "Фамилия: ";
		user[i].second_name = check("string");
		user[i].second_name[0] = checkRegister(n, user[i].second_name[0]);

		cout << "Имя: ";
		user[i].name = check("string");
		user[i].name[0] = checkRegister(n, user[i].name[0]);

		cout << "Отчество: ";
		user[i].middle_name = check("string");
		user[i].middle_name[0] = checkRegister(n, user[i].middle_name[0]);

		cout << "Страна: ";
		user[i].country = check("string");
		user[i].country[0] = checkRegister(n, user[i].country[0]);

		cout << "Регион: ";
		user[i].region = check("string");
		user[i].region[0] = checkRegister(n, user[i].region[0]);

		cout << "Район: ";
		user[i].area = check("string");
		user[i].area[0] = checkRegister(n, user[i].area[0]);

		cout << "Город: ";
		user[i].city = check("string");
		user[i].city[0] = checkRegister(n, user[i].city[0]);

		cout << "Улица: ";
		user[i].street = check("string");
		user[i].street[0] = checkRegister(n, user[i].street[0]);

		cout << "Дом: ";
		user[i].house = atoi(check("int").c_str());

		cout << "Квартира: ";
		user[i].door = atoi(check("int").c_str());

		cout << "Номер телефона: ";
		user[i].telephone = atoi(check("int").c_str());
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
void Resize(int n, stationary_telephone* changeUser, stationary_telephone* user, int choise)
{
	for (int i = 0; i < n; i++)
	{
		changeUser[i].second_name = user[i].second_name;

		changeUser[i].name = user[i].name;

		changeUser[i].middle_name = user[i].middle_name;

		changeUser[i].country = user[i].country;

		changeUser[i].region = user[i].region;

		changeUser[i].area = user[i].area;

		changeUser[i].city = user[i].city;

		changeUser[i].street = user[i].street;

		changeUser[i].house = user[i].house;

		changeUser[i].door = user[i].door;

		changeUser[i].telephone = user[i].telephone;
	}

	for (int i = n; i < choise; i++)
	{
		cout << endl << endl << "\tПользователь №" << i + 1 << endl;
		
		cout << "Фамилия: ";
		changeUser[i].second_name = check("string");
		changeUser[i].second_name[0] = checkRegister(n, changeUser[i].second_name[0]);

		cout << "Имя: ";
		changeUser[i].name = check("string");
		changeUser[i].name[0] = checkRegister(n, changeUser[i].name[0]);

		cout << "Отчество: ";
		changeUser[i].middle_name = check("string");
		changeUser[i].middle_name[0] = checkRegister(n, changeUser[i].middle_name[0]);

		cout << "Страна: ";
		changeUser[i].country = check("string");
		changeUser[i].country[0] = checkRegister(n, changeUser[i].country[0]);

		cout << "Регион: ";
		changeUser[i].region = check("string");
		changeUser[i].region[0] = checkRegister(n, changeUser[i].region[0]);

		cout << "Район: ";
		changeUser[i].area = check("string");
		changeUser[i].area[0] = checkRegister(n, changeUser[i].area[0]);

		cout << "Город: ";
		changeUser[i].city = check("string");
		changeUser[i].city[0] = checkRegister(n, changeUser[i].city[0]);

		cout << "Улица: ";
		changeUser[i].street = check("string");
		changeUser[i].street[0] = checkRegister(n, changeUser[i].street[0]);

		cout << "Дом: ";
		changeUser[i].house = atoi(check("int").c_str());

		cout << "Квартира: ";
		changeUser[i].door = atoi(check("int").c_str());

		cout << "Номер телефона: ";
		changeUser[i].telephone = atoi(check("int").c_str());
	}
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
// Возможность русского ввода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	int n = 0, choise = 0;

	cout << "Введите размер базы: ";

// Проверка на ввод корректных данных
	n = atoi(check("int").c_str());

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
		stationary_telephone* resize = new stationary_telephone[choise]; // Временная структура
		Resize(n, resize, user, choise);
		choise -= n;
		n += choise;
		user = new stationary_telephone[n];
		user = resize;
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
