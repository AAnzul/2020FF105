//������� 18 ����� 1 (���� 4)
#include <iostream>

#include <clocale>

#include <cmath>

using namespace std;

int main()

{

	int n, k, i, x, S;

	cin >> n;

	x = 1;

	S = 0;

	for (i = 1; i <= (n - 1); i++)

		x = x * 10;

	cin >> k;

	for (i = x; i <= (x * 10 - 1); i++)

		if (i % k == 0)

			S = S + i;

	cout << "S= " << S << endl;

	system("pause");

	return 0;
}
// ������� 18 ����� 2
#include <iostream>

using namespace std;

double f(const double x, int a[], const int i, const int max)

{

	if (i + 1 < max)return f(x, a, i + 1, max) * x + a[i];

	else return a[max] * x + a[i];

}

int main()

{

	setlocale(LC_ALL, "Russian");

	int n, i;

	int a[100];

	double x;

	n = 11;

	cout << "������� ���������� X: ";

	cin >> x;

	for (i = 0; i < n; i++) {

		a[i] = i + 1;

	}

	cout << f(x, a, 0, n - 1);

	return 0;

}
// ������� 18 ����� 3 
#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <locale>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	double e;

	cout << "������� � = ";

	cin >> e;

	cout << endl;

	double a, an;

	an = 2;

	int i = 1;

	cout << an;

	do

	{

		a = an;

		an = (2 + a * a) / (2 * a);

		i++;

		cout.precision(4);

		cout << " " << an;

	} while (fabs(an - a) >= e);

	cout << endl;

	cout << "����� ������� �������� ��� �������� |an-an-1|<e = " << i << "\n";

	system("pause");

}
// ������� 18 ����� 4 
#include <iostream>

#include <clocale>

#include <cmath>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	double a, b, f, h;

	cout << "������� ����� ������� ��������� a = ";

	cin >> a;

	cout << "������� ������ ������� ��������� b = ";

	cin >> b;

	cout << "������� ��� h = ";

	cin >> h;

	for (double i = a; i <= b; i += h)

	{

		f = 2 * cos(sqrt(i)) + 0.5;

		cout << "x = " << i << "\tf(x) = " << f << endl;

	}

	system("pause");

	return 0;

}