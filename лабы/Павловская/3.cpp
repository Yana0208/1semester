#include "iostream"

using namespace std;
int main()
{
	int n, m, a, b, line, k, l;
	cout << "Entes size array: a, b ";
	cin >> a;
	cin >> b;
	int **array = new int* [a];
	for (int i = 0; i < a; i++)
	{
		array[i] = new int[i + 1];
	}
	for (int i = 0; i < a; i++)
	{
		cout << "Enter number ";
		cout << i + 1;
		cout << ": ";
		for (int j = 0; j < i+1; j++)
		{
			cin >> array[i][j];
			for (i = 0; i < a; i++, n = 0)
			{
				for (j = 0; j < b; j++)
				{
					if (array[i][j] > 0)
						n++;
				}
				if (n == a)
					line++;
				cout << "Number of non-zero rows = ";
				cout << line;
			}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (array[i][j] > k)
				k = array[i][j];
		}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			if (array[i][j] == k)
				l++;
		}
	cout << "Max element " << l;
	free(array);
			
		}
	}
	system("pause");
	return 0;
}

