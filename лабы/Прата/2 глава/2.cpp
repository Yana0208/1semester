#include <iostream>


int main()
{
	using namespace std;
    int furlongs;
	int yard;
	cout << "Enter a distance in furlongs ";
	cin >> furlongs; 
	yard = furlongs / 220;
	cout << furlongs;
	cout << " furlongs is ";
	cout << yard;
	cout << " yard.";
	cout << endl; 
	system ("pause");
	return 0;
}