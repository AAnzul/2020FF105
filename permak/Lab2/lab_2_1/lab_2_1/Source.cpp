#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c, n, N;
	cout << "������� A,B,C � ����� ��������� ";
	cin >> a >> b >> c >> n;
	N = ((n - (n - a)) * b + (n - a) * c);
	cout << "����� �������� " << N;		
}
