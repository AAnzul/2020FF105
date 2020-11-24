
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const double PI = 3.14;
    double a, b, h, x, y;
    cout << "Введите левую границу отрезка a = ";
    cin >> a;
    cout << "Введите правую границу отрезка b = ";
    cin >> b;
    cout << "Введите шаг h = ";
    cin >> h;
    cout << "x" << "   " << "F(x)" << endl;
    for (x = a; x <= b; x = x + h) {
        y = sin(x * PI / 180) * sin(x * PI / 180);
        cout << x << "  " << y << endl;
    }
	cin.get();
	cin.get();
	return 0;
}

