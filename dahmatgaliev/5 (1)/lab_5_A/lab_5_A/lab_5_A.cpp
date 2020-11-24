
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, A;
    int l = 0;
    cout << "Введите натуральное N: ";
    cin >> N;
    A = N;
    while (N > 0)
    {
        N = N / 10;
        l = l + 1;
    }
    int a, b;
    b = A % 10;
    a = A / (pow(10, l - 1));
    N = A - a * pow(10, l - 1) + b * pow(10, l - 1) - b + a;
    cout << "N = " << N << endl;
    cin.get();
    cin.get();
    return 0;
}


