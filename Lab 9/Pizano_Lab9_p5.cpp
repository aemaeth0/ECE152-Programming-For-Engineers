/* Al Pizano */
/* Lab 9 Problem 5 */
/* 4/9/2017 */

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#define rows 5
using namespace std;
void highest(double gross_pay[]);

struct Employee {
	int number;
	string name;
	float rate;
	int hours;
} emp[rows];

int main()
{
	double total = 0.0;
	double gross_pay[5];

	for (int i = 0; i<rows; i++)
	{
		cout << "Enter the employee number: ";
		cin >> emp[i].number;
		cin.ignore();

		cout << "Enter the employee name: ";
		getline(cin, emp[i].name);

		cout << "Enter the pay rate: ";
		cin >> emp[i].rate;

		cout << "Enter the number of hours worked by the employee: ";
		cin >> emp[i].hours;

	}

	cout << "Number\tName\tGross Pay" << endl;
	for (int i = 0; i<rows; i++)
	{
		gross_pay[i] = emp[i].rate*emp[i].hours;
		cout << emp[i].number << "\t" << emp[i].name << "\t" << gross_pay[i] << endl;

		total += gross_pay[i];
	}

	cout << "The total gross pay of all employees is: $" << total << endl;

	highest(gross_pay);
	system("pause");
	return 0;
}

void highest(double gross_pay[])
{
	string emp_name;
	double max = gross_pay[0];
	for (int i = 0; i<5; i++)
	{
		if (gross_pay[i]>max)
		{
			max = gross_pay[i];
			emp_name = emp[i].name;
		}

	}
	cout << "The employee '" << emp_name << "' has the highest salary of: $" << max << endl;
}