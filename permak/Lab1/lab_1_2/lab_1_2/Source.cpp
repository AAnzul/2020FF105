#include<iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.14159
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double  S,s, r, R,a;
	cout << "������� �������� r � R ";
	cin >> r>>R;
	s = PI * pow(r, 2);
	S = PI * pow(R, 2);
	a = S - s;
	cout << "������� ������ " << a;

}