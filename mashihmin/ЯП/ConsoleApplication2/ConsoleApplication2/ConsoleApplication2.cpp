// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z, a, b, c, d, max = 0;

	cout << "Задание 1" << endl;

	do
	{
		cout << "Введите х" << endl;
		cin >> x;
		cout << "Введите y" << endl;
		cin >> y;
	} while (x == y);
	if (x > y)
	{
		a = (y + x) / 2;
		x = 2 * x * y;
		y = a;
	}
	else
	{
		a = (y + x) / 2;
		y = 2 * x * y;
		x = a;
	}
	cout << "x = " << x << " y = " << y << endl;
	system("pause");

	cout << "Задание 2" << endl;

	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите c" << endl;
	cin >> c;
	cout << "Введите d" << endl;
	cin >> d;
	if (d==a)
	{
		max = a;
	}
	if (d == b)
	{
		max = b;
	}
	if (d == c)
	{
		max = c;
	}
	if (max == 0)
	{
		a = d - a;
		b = d - b;
		c = d - c;
		max = abs(a);
		if (abs(b)>a)
		{
			max = b;
		}
		if (abs(c)>a)
		{
			max = c;
		}
	}
	cout << "Ответ: " << max << endl;
	system("pause");

	cout << "Задание 3" << endl;

	do
	{
		cout << "Введите х" << endl;
		cin >> x;
		cout << "Введите y" << endl;
		cin >> y;
		cout << "Введите z" << endl;
		cin >> z;
		if ((x == y) or (x == z) or (y == z))
		{
			max = 1;
		}
	} while (max == 1);
	if (x + y + z < 1)
	{
		max = 1000000;
		if (abs(x)<max)
		{
			max = x;
			x = (y + z) / 2;
		}
		if (abs(y) < max)
		{
			max = y;
			y = (x + z) / 2;
		}
		if (abs(z) < max)
		{
			max = z;
			z = (y + x) / 2;
		}

	}
	else
	{
		max = 1000000;
		if (abs(x)<max)
		{
			max = x;
			x = (y + z) / 2;
		}
		if (abs(y) < max)
		{
			max = y;
			y = (x + z) / 2;
		}
	}
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
	system("pause");

	cout << "Задание 4" << endl;

	cout << "Введите х" << endl;
	cin >> x;
	if ((x < 1) or (x == 1))
	{
		max = 0;
	}
	else
	{
		max = 1 / (x + 6);
	}
	cout << "Ответ: " << max << endl;
	system("pause");
	return 0;
}

