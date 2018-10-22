#include <iostream>


int main()
{
	using namespace std;
    int celsius;
	int fahrenheit;
	cout << "Enter a Celsius value ";
	cin >> celsius; 
	const float a = 1.8;
	const char b = 32;
	fahrenheit = a * celsius;
	fahrenheit = fahrenheit + b;
	cout << celsius;
	cout << " degrees Celsius is ";
	cout << fahrenheit;
	cout << " degrees Fahrenheit .";
	cout << endl; 
	system ("pause");
	return 0;
}