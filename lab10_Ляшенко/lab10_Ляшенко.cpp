#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій

using namespace std;
int main()
{
	const int c = 3;
	int i,k,max = 0,min = 0;

	struct faculty
	{
		string name;
		int debts;
	}f[c];

	for (i = 0; i < c; i++)
	{
		cout << "Enter the name of the faculty #" << i + 1 << ": ";
		cin >> f[i].name;
		cout << "Enter number of debts of this faculty" << i + 1 << ": ";
		cin >> f[i].debts;
	}

	cout << endl;

	for (i = 0; i < c; i++)
	{
		cout << "The faculty " << f[i].name << " has " << f[i].debts << " debts" << endl;
	}


	k = f[0].debts;
	for (i = 0; i < c; i++)
	{
		if (f[i].debts > k)
		{
			max = i;
		}
	}

	cout << endl << "The faculty " << f[max].name << " has most of all debts: " << f[max].debts << endl;

	k = f[0].debts;
	for (i = 0; i < c; i++)
	{
		if (f[i].debts < k)
		{
			min = i;
		}
	}

	cout << "The faculty " << f[min].name << " has least of all debts: " << f[min].debts << endl;
}