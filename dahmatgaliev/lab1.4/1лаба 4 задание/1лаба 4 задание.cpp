#include <iostream>
using namespace std;
int main()
{
	int x, y, r1, r2, d, h;
	bool;
	setlocale(LC_ALL, "ru");
	cout << "Введите x,y\n";
	cin >> x >> y;
	r1 = 2.5;
	r2 = 5.0;
	h = sqrt(x * x + y * y);
	if ((h < r1) || (x < 0))
	{
		cout << "false";
		return 0;
	}
	if (h < r2)
	{
		cout << "true";
		return 0;
	}
}