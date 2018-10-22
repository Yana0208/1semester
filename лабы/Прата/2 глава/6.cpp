#include <iostream>

void t(int h, int m)
{
	using namespace std;
	cout << "Time ";
 	cout << h;
	cout << ":";
 	cout << m;
 	cout << endl; 
}
 int main()
 {
 	using namespace std;
	int hours;
	int minutes;
	cout << "Enter a number hours ";
	cin >> hours;
	cout << "Enter a number minutes ";
	cin >> minutes;
	t(hours, minutes);
 	system ("pause");
 	return 0;
 } 