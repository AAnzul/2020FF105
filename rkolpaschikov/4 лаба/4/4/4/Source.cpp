#include <iostream>

#include <clocale>

#include <cmath>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	double a, b, f, h;

	cout << "������� ����� ������� ��������� a = ";

	cin >> a;

	cout << "������� ������ ������� ��������� b = ";

	cin >> b;

	cout << "������� ��� h = ";

	cin >> h;

	for (double i = a; i <= b; i += h)

	{

		f = (cos(i / 3) / sin(i / 3)) + 0.5 * sin(i);

		cout << "x = " << i << "\tf(x) = " << f << endl;

	}

	system("pause");

	return 0;

}