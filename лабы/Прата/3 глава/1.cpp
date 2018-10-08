#include "iostream"
 
 
int main()
{
    using namespace std;
    int feet;
    int inches;
    cout << "Enter your height in inches";
    cout << endl;
    const char a = 12;
    cin >> inches;
    feet = inches / a;
    cout << "Your height in feet is ";
    cout << feet;
    cout << " and inches is ";
    inches = inches % a;
    cout << inches;
    cout << endl;
    system("pause");
    return 0;
 
}