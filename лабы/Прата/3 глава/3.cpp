#include <iostream>


int main()
{
	using namespace std;
	int degrees;
	int minutes;
	int seconds;
	int latitude;
	int latitude1;
	cout << "Enter latitude in degrees ";
	cin >> degrees;
	cout << "Enter latitude in minutes ";
	cin >> minutes;
	cout << "Enter latitude in seconds ";
	cin >> seconds;
	const char a = 60;
	const long b = 3600;
	latitude1 = minutes / a;
	latitude = seconds / b;
	latitude = degrees + latitude + latitude1;
	cout << degrees;
	cout << " degrees, ";
	cout << minutes;
	cout << " minutes, ";
	cout << seconds;
	cout << " seconds is ";
	cout << latitude;
	cout << " degrees.";
	system ("pause");
	return 0;
}