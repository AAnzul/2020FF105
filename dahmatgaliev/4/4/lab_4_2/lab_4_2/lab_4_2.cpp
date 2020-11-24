
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите N: ";
    cin >> N;
    double s = 1;
    double b = 0;
    double a = 0;
    const double PI = 3.14;
    while (s <= N) {
        b = b + 1 / (sin (s*PI/180)+a);
        a = a + sin(s*PI/180);
        s++;
    }
    cout << "Сумма ряда: " << b << endl;
    cin.get();
    cin.get();
    return 0;
}


