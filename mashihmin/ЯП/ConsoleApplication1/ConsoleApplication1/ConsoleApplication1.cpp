// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z, a, b;
	cout << "Задание 1" << endl;
	cout << "Введите значение Х" << endl;
	cin >> x;
	cout << "Введите значение Y" << endl;
	cin >> y;
	z = ((x + y) / (y + 1)) - ((x*y - 12) / (34 + x));
	cout << "Ответ: " << z << endl;
	system ("pause");
	cout << "Задание 2" << endl;
	cout << "Введите четырехзначное число" << endl;
	cin >> a;
	x = trunc(a / 1000);
	y = trunc(a / 100 - x * 10);
	z = trunc(a / 10 - (x * 100 + y * 10));
	b = trunc(a - (x * 1000 + y * 100 + z * 10));
	a = x * y * z * b;
	cout << "Ответ: " << a << endl;
	system("pause");
	cout << "Задание 3" << endl;
	cout << "Введите трехзначное число" << endl;
	cin >> a;
	x = trunc(a / 100);
	y = trunc(a / 10 - x * 10);
	z = trunc(a - (x * 100 + y * 10));
	b = x + y + z;
	a = (pow(a, 2));
	if (a == (pow(b, 3)))
	{
		cout << "Ответ: true" << endl;
	}
	else
	{
		cout << "Ответ: false" << endl;
	}
	system("pause");
	cout << "Задание 4" << endl;
	cout << "Введите значение Х" << endl;
	cin >> x;
	cout << "Введите значение Y" << endl;
	cin >> y;
	if ((x<=7) && (x>=1) && (y<=7) && (y>=1) && (x+y<=11) && (x + y >= 5))
	{
		cout << "Ответ: Точка принадлежит области" << endl;
	}
	else
	{
		cout << "Ответ: Точка не принадлежит области" << endl;
	}
	system("pause");
    return 0;
}

