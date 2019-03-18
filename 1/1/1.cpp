#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Auto
{
	string name;
	string producer;
	string type;
	unsigned int year;
	unsigned int registration_date;
	unsigned int registration_month;
	unsigned int registration_year;

	void print()
	{
		cout << "\tМарка: " << name << "\tПроиводитель: " << producer << "\tТип: " << type << "\tГод выпуска: " << year;
		cout << "\tДата регистрации: " << registration_date << '.' << registration_month << '.' << registration_year << endl;
	}
};


string name(string nm)
{
	int a = 1 + rand() % 4;

	switch (a)
	{
	case 1: nm = "Mazda"; break;
	case 2: nm = "Nissan"; break;
	case 3: nm = "Jaguar"; break;
	case 4: nm = "Ford"; break;
	}


	return nm;
};

string producer(string nm, string Carsname)
{
	if (Carsname == "Mazda")
	{
		nm = "Япония";
	}
	else if (Carsname == "Nissan")
	{
		nm = "Япония";
	}
	else if (Carsname == "Jaguar")
	{
		nm = "Европа";
	}
	else
	{
		nm = "США";
	}
	return nm;
}

string type(string nm)
{
	int a = 1 + rand() % 4;
	
	switch (a) 
	{
	case 1: nm = "Хэтчбек"; break;
	case 2: nm = "Седан"; break;
	case 3: nm = "Минивэн"; break;
	case 4: nm = "Пикап"; break;
	}
	

	return nm;
};




int main()
{
	setlocale(LC_ALL, "ru");
	
	string nm;



	//int a1, a2, a3;

	const int k = 25;

	Auto Cars[k];

	cout << "Весь список автомобилей: " << endl;

	for (int i = 0; i < k; i++)
	{
		Cars[i].name = name(nm);
		Cars[i].producer = producer(nm, Cars[i].name);
		Cars[i].type = type(nm);
		Cars[i].year = 1985 + rand() % 34;
		Cars[i].registration_date = 1 + rand() % 31;
		Cars[i].registration_month = 1 + rand() % 12;
		Cars[i].registration_year = Cars[i].year + 1;
		Cars[i].print();
	}


	cout << endl << "Список автомобилей Ford: " << endl;
	for (int i = 0; i < k; i++)
	{
		if (Cars[i].name == "Ford" && Cars[i].registration_year <= 2000)
		{
			Cars[i].print();
		}
		else
			continue;
	}

}