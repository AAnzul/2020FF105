#include <iostream>
using namespace std;
void main()
{
	int a, b, c, d;
	setlocale(LC_ALL, "ru");
	cout << "Введите трехзначное число\n";
	cin >> a;
	b = a % (10);
	c = (a / 10 % 10);
	d = (a / 100 % 10);
	if (((b + c + d) % 2) == (0))
	{
		cout << "True";
	}
	else cout << "False";
}