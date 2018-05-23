/* Al Pizano */
/* Lab 9 Problem 4 */
/* 4/9/2017 */

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#define rows 5
using namespace std;

struct Employee {
	int number;
	string name;
	float rate;
	int hours;
} emp[rows];

int main()
{
	double gross_pay = 0.0;
	double total = 0.0;

	for (int i = 0; i<rows; i++)
	{
		cout << "Enter the employee number:";
		cin >> emp[i].number;
		cin.ignore();

		cout << "Enter the employee name:";
		getline(cin, emp[i].name);

		cout << "Enter the pay rate:";
		cin >> emp[i].rate;

		cout << "Enter the number of hours worked:";
		cin >> emp[i].hours;
	}

	cout << "Number\tName\tGross Pay" << endl;

	for (int i = 0; i<rows; i++)
	{
		gross_pay = emp[i].rate*emp[i].hours;
		cout << emp[i].number << "\t" << emp[i].name << "\t" << gross_pay << endl;

		total += gross_pay;
	}
	cout << "The total gross pay of all employees is: $ " << total << endl;
	system("pause");
	return 0;
}