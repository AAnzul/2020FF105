#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z;
	cout << "������� ���������� �����:";
	cin >> x >> y;
	z = sqrt(pow(x, 2)) + pow(y, 2);
	if (z <= 6)
	{
		if (x > 0 && y > 0)
		{
			cout << "�� �����������";

		}
		cout << "�����������";

	}
	else
		cout << "�� �����������";


}