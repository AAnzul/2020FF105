#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a,b;
	cout << "������� ��� ";
	cin >> a;
	b = a % 12;
	switch (b)
	{
	case 0:cout << "��� ��������"; break;
	case 1:cout << "��� ������"; break;
	case 2:cout << "��� ������"; break;
	case 3:cout << "��� ������"; break;
	case 4:cout << "��� �����"; break;
	case 5:cout << "��� ������"; break;
	case 6:cout << "��� �����"; break;
	case 7:cout << "��� �����"; break;
	case 8:cout << "��� �������"; break;
	case 9:cout << "��� ����"; break;
	case 10:cout << "��� ������"; break;
	case 11:cout << "��� ����"; break;
	case 12:cout << "��� ��������"; break;
	}
	
}