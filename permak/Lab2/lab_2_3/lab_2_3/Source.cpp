#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, x2, x3, x, y1, y2, y3, y, A, B, S;
	cout << "������� x1,x2,x3,y1,y2,y3,x,y";
	cin>>x1>>x2>>x3>>y1>>y2>>y3>>x>>y;
     S = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
	 if (S = 0) 
	 {
		 cout << "����������� �� ����������";
	 }
	else
	
		A = (x - x3) * (y2 - y3) - (x2 - x3) * (y - y3);
        B = (x1 - x3) * (y - y3) - (x - x3) * (y1 - y3);
		if (((S < 0) && (S <= A) && (A <= 0) && (S <= B) && (B <= 0)) || ((S > 0) && (S >= A) && (A >= 0) && (S >= B) && (B >= 0)))
		{
			cout << "true";
		}
		else
			cout << "false";
}
