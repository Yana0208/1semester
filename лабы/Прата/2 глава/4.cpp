#include <iostream>

void t(int m)
{
	using namespace std;
	int fahrenheit;
	const double a = 1.8;
	const char b = 32;
	fahrenheit = a * m;
	fahrenheit = b + fahrenheit;
	cout << m;
 	cout << " degrees Celsius is ";
	cout << fahrenheit;
 	cout << " degrees Fahrenheit .";
 	cout << endl; 
}
 int main()
 {
 	using namespace std;
	int celsius;
	cout << "Enter a Celsius value ";
	cin >> celsius;
	t(celsius);
 	system ("pause");
 	return 0;
 } 