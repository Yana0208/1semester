#include "iostream"


int main()
{
	using namespace std;
	int a;
	int b;
	int c;
	int x0;
	int x;
	int dx;
	int f;
	int f1;
	cout << "Enter a";
	cout << endl;
	cin >> a;
	cout << "Enter b";
	cout << endl;
	cin >> b;
	cout << "Enter c";
	cout << endl;
	cin >> c;
	cout << "Enter x0";
	cout << endl;
	cin >> x0;
	cout << "Enter x";
	cout << endl;
	cin >> x;
	cout << "Enter dx";
	cout << endl;
	cin >> dx;
	while ((a || b) && ((a || c) != 0))
	{
	while (x0 <= x)
	{
		if ((x0 < 0) && (b != 0))
		{
			f = x0 * x0;
			f = a * f;
			f = f + b;
		}
		else
		{
			if ((x0 > 0) && (b == 0))
			{
				f1 = x0 - a;
				f = x0 - c;
				f = f1 / f;
			}
			else
			{
				f = x0 / c;
			}
		}
		
		cout << "F = ";
		cout << f;
		cout << endl;
		x0 = x0 + dx;
		
	}
	}
	system("pause");
	return 0;
}

