#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, p, s;
	s = 1;
	n = 1;
	k = 1;
	cout << "������� ������������ ���������� ������ �������� ����������� �����" << "\n" << "p=" ;
	cin >> p;
	while (s < p)
	{
		k = k + 2;
		n = n++;
		s = s * k;
	};
	if (s<p||s>p)
	{
		cout << "����� " << p << " �� �������� ������������� ������ �������� �����" << "\n";
	}
	else
	{
		cout << "����� ����������:" << n << "\n";
	};
	return 0;
}