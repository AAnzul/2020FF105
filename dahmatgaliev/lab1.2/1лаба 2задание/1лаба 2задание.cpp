// второе 

#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, y1, x2, y2, x3, y3, P, p2, S, a, b, c;
	cout << "Введите значения x1,y1,x2,y2,x3,y3";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	P = a + b + c;
	p2 = P / 2;
	S = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
	cout << "Периметр " << P << " Площадь " << S;
}