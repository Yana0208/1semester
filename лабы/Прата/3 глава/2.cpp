#include <iostream>


int main()
{
	using namespace std;
	int feet;
	int inches;
	int pounds;
	int kilogram;
	int metr;
	int BMI;
	cout << "Enter your height in feet ";
	cin >> feet;
	cout << "Enter your height in inches ";
	cin >> inches;
	cout << endl;
	cout << "Enter your weight in pounds ";
	cin >> pounds;
	const char a = 12;
	const char b = 2.2;
	const char c = 39;
	feet = feet * a;
	inches = feet + inches;
	kilogram = pounds / b;
	metr = inches / c;
	BMI = sqrt (metr);
	BMI = kilogram / BMI;
	cout << "Your BMI ";
	cout << BMI;
	cout << endl;
	system ("pause);
	return 0;
}