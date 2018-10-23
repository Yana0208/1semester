#include <iostream>

int main()
{
	using namespace std;
	int days;
	int hours;
	int minutes;
	int seconds;
	int d;
	cout << "Enter the number of seconds ";
	cin >> seconds;
	const long a = 86400;
	const long b = 3600;
	const char c = 60;
	days = seconds / a;
	d = seconds % a;
	hours = d / b;
	d = d % b;
	minutes = d / c;
	d = d % c;
	cout << seconds;
	cout << " seconds = ";
	cout << days;
	cout << " days, ";
	cout << hours;
	cout << " hours, ";
	cout << minutes;
	cout << " minutes, ";
	cout << d;
	cout << " seconds.";
 	system ("pause");
 	return 0;
 } 