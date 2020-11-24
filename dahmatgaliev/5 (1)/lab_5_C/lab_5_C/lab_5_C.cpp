
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int k, n, i, j, a, m;
    cout << "Введите k= ";
    cin >> k;
    m = 0;
    i = 0;
    do {
        m = m + 1;
        n = m * m;
        j = n;
        while (j > 0) {
            j = j / 10;
            i = i + 1;
        };
    } while (i < k);
    while (i >= k) {
        a = n % 10;
        n = n / 10;
        i = i - 1;
    }
    cout << "к-ая цифра = " << a << endl;
    cin.get();
    cin.get();
    return 0;
}
