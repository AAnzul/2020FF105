#include <iostream>

using namespace std;

int main()

{

	setlocale(0, "rus");

	double R, k, b, x1, y1, x2, y2, d, a, b1, c;

	cout << "������� ������ ���������� R= " << endl;

	cin >> R;

	cout << "������� ����-�� ��������� ������ k, b " << endl;

	cin >> k >> b;

	a = k * k + 1;

	b1 = 2 * k * b;

	c = b * b - R * R;

	d = b1 * b1 - 4 * a * c;

	if (d < 0)

		cout << "����� ����������� ���" << endl;

	else if (d == 0)

	{

		x1 = -b1 / (2 * a);

		y1 = k * x1 + b;

		cout << "������ �������� ���������� � ����� �= " << x1 << " y= " << y1 << endl;

	}

	else if (d > 0)

	{

		x1 = (-b1 - sqrt(d)) / (2 * a);

		y1 = k * x1 + b;

		x2 = (-b1 + sqrt(d)) / (2 * a);

		y2 = k * x2 + b;

		cout << "������ ���������� ���������� � ���� ������: " << endl;

		cout << "x1= " << x1 << " x2= " << x2 << endl;

		cout << "y1= " << y1 << " y2= " << y2 << endl;

		if (x1 > 0 && y1 > 0) cout << "1 ����� ����������� � I ���������" << endl;

		else if (x1 < 0 && y1 > 0) cout << "1 ����� ����������� �o II ���������" << endl;

		else if (x1 < 0 && y1 < 0) cout << "1 ����� ����������� �o III ���������" << endl;

		else if (x1 > 0 && y1 < 0) cout << "1 ����� ����������� �o IV ���������" << endl;

		if (x2 > 0 && y2 > 0) cout << "2 ����� ����������� � I ���������" << endl;

		else if (x2 < 0 && y2 > 0) cout << "2 ����� ����������� �o II ���������" << endl;

		else if (x2 < 0 && y2 < 0) cout << "2 ����� ����������� �o III ���������" << endl;

		else if (x2 > 0 && y2 < 0) cout << "2 ����� ����������� �o IV ���������" << endl;

	}

	system("Pause");

	return 0;

}