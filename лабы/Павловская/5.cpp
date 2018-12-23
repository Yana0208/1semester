#include "iostream"

using namespace std;

int main ()
{
	struct STUDENT
	{
		string surname;
		string initials;
		string group;
		int progress [5];
		STUDENT()
		{

		}
	};
	void input(STUDENT *stdu, int size);
	void print(STUDENT *stdu, int size);
	void sort(STUDENT *stdu, int size);
	bool average(STUDENT *stdu1, STUDENT *stdu2);
	void advanced(STUDENT *stdu, int size);

	int main ()
	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);
		STUDENT *massive;
		int xm;
		do
		{
			cout << "Enter number of array elements";
			cout<< endl;
			cin >> xm;
		} 
		while (xm <= 0 && xm >= 100);
		massive = (STUDENT*)malloc(xm * (sizeof(STUDENT)));
		input(massive, xm);
		sort(massive, xm);
		print(massive, xm);
		advanced(massive, xm);
		delete[] massive;


	}


	void input(STUDENT *stdu, int size)
	{
		double *buf;
		STUDENT change;
		buf = (double*)malloc(size * sizeof(double));
		for (int i = 0; i < size; i++)
		{
			std::cout << "Enter last name and initials " << std::endl;
			std::cin >> stdu[i].FIO;
			std::cout << "Enter group number " << std::endl;
			std::cin >> stdu[i].num_gr;
			std::cout << "Enter student grades: " << std::endl;
			std::cin >> stdu[i].subjects_rating[0] >> stdu[i].subjects_rating[1] >> stdu[i].subjects_rating[2] >>
				stdu[i].subjects_rating[3] >> stdu[i].subjects_rating[4];
			buf[i] = (stdu[i].subjects_rating[0] + stdu[i].subjects_rating[1] + stdu[i].subjects_rating[2] +
				stdu[i].subjects_rating[3] + stdu[i].subjects_rating[4]) / 5;
		}

	}
	void print(STUDENT *stdu, int size)
	{
		std::cout << "-------------------------------------------------------------------------------" << std::endl;
		std::cout << "|    Last name      | Number | History  | Math | Programm  | physical | English  |" << std::endl;
		std::cout << "|                   | group  |          |      |           | culture  |          |" << std::endl;
		std::cout << "-------------------------------------------------------------------------------" << std::endl;
		for (int i = 0; i < size; i++)
		{
			/*std::cout << stdu[i].FIO << " Группа " << stdu[i].num_gr << " Успеваемость:" << stdu[i].subjects_rating[0] << " " <<
				stdu[i].subjects_rating[1] << " " << stdu[i].subjects_rating[2] << " " << stdu[i].subjects_rating[3] <<
				" " << stdu[i].subjects_rating[4] << std::endl;*/


			cout << "|";
			cout.width(20); cout.setf(ios::left);
			cout << stdu[i].FIO;
			//
			cout << "|";
			cout.width(7); cout.setf(ios::left);
			cout << stdu[i].num_gr;
			//
			cout << "|";
			cout.width(9); cout.setf(ios::left);
			cout << stdu[i].subjects_rating[0];
			//
			cout << "|";
			cout.width(6); cout.setf(ios::left);
			cout << stdu[i].subjects_rating[1];
			//
			cout << "|";
			cout.width(11); cout.setf(ios::left);
			cout << stdu[i].subjects_rating[2];
			//
			cout << "|";
			cout.width(8); cout.setf(ios::left);
			cout << stdu[i].subjects_rating[3];
			cout << "|";
			//
			cout.width(10); cout.setf(ios::left);
			cout << stdu[i].subjects_rating[4];
			cout << "|" << endl;

		}
		std::cout << "-------------------------------------------------------------------------------" << std::endl;
	}
	bool average(STUDENT* stdu1, STUDENT* stdu2)
	{
		double a = (stdu1->subjects_rating[0] + stdu1->subjects_rating[1] + stdu1->subjects_rating[2] +
			stdu1->subjects_rating[3] + stdu1->subjects_rating[4]) / 5;
		double b = (stdu2->subjects_rating[0] + stdu2->subjects_rating[1] + stdu2->subjects_rating[2] +
			stdu2->subjects_rating[3] + stdu2->subjects_rating[4]) / 5;
		return a > b;
	}
	void sort(STUDENT *stdu, int size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (Cmp_Average(&stdu[i], &stdu[j]))
				{
					STUDENT buf = stdu[i];
					stdu[i] = stdu[j];
					stdu[j] = buf;
				}
			}
		}
	}
	void advanced(STUDENT *stdu, int size)
	{
		int kol = 0;
		std::cout << "------------------------------" << std::endl;
		std::cout << "|    Last name      | Number |" << std::endl;
		std::cout << "|                   | group  |" << std::endl;
		std::cout << "------------------------------" << std::endl;

		for (int i = 0; i < size; i++)
		{
			if (stdu[i].subjects_rating[0] > 3 && stdu[i].subjects_rating[1] > 3 &&
				stdu[i].subjects_rating[2] > 3 && stdu[i].subjects_rating[3] > 3 && stdu[i].subjects_rating[4] > 3)
			{
				cout << "|";
				cout.width(20); cout.setf(ios::left);
				cout << stdu[i].FIO;
				//
				cout << "|";
				cout.width(7); cout.setf(ios::left);
				cout << stdu[i].num_gr << "|" << endl;
				kol++;
			}
		}
		if (kol == 0)
			cout << "The list does not have time" << endl;

	system("pause");
	return 0;

}