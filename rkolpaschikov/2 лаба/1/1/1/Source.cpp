#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� ���-�� ���������:";
	cin >> n;
	if (n % 2 == 0)
	{
		cout << "�����" << endl;

	}
	else
		cout << "�� �����" << endl;
}