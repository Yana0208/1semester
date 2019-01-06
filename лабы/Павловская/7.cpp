#include <iostream>

using namespace std;

void search()
{
	int n, a, b;
	n = 0;
	for (int i = 0; i < a; i++) 
	{
		int counter = 0;
		for (int j = 0; j < b; j++) 
		{
			if (array[i][j] != 0)
				counter++;
		}
		if (counter == a)
			n++;
	}
	cout << "Number of non-zero rows - " << n << endl;
}
void search1()
{
	int max = -1488;
	int temp[b*a];
	int k = 0;
	while (k < a*b)
	{
		for (int i = 0; i < b; i++)
			for (int j = 0; j < a; j++)
			{
				temp[k] = array[i][j];
				k++;
			}
	}

	for (int i = 0; i < b*a; i++)
		for (int j = i + 1; j < b*a; j++)
			if (temp[i] == temp[j] && temp[i] > max && i != j)
			{
				max = temp[i];
			}

	cout << "Max element that occurs more than once - " << max << endl;
}

int main()
{
	int n, a, b;

	cout << "Entes size array: a, b ";
	cin >> a;
	cin >> b;

	int **array = new int*[a];
	for (int i = 0; i < a; i++)
	{
		array[i] = new int[b];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cin >> array[i][j];
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}

	search();
	search1();


	for (int i = 0; i < a; i++)
		delete[] array[i];
	delete[] array;

	return 0;
}