#include <iostream>

void light_year(int m)
{
	int units;
	using namespace std;
	const double a = 63240;
	units = a * m;
	cout << m;
 	cout << " light years is ";
	cout << units;
 	cout << " astronomical units.";
 	cout << endl; 
}
 int main()
 {
 	using namespace std;
	int light;
	cout << "Enter the number of light years ";
	cin >> light;
	light_year(light);
 	system ("pause");
 	return 0;
 } 