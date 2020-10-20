///// 1
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, d, s;
	cout << "Введите значения а,b,c,d\n";
	cin >> a >> b >> c >> d;
	s = (a / c) * (b / d) - (a * b - c) / (c * d);
	cout << "Ответ : "<< s;
}


