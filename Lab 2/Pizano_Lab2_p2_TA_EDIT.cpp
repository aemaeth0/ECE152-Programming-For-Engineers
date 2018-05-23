#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int month;
	int day;
	cout << "Enter in a month: ";
	cin >> month;
	cout << "Enter in a day: ";
	cin >> day;

	if ((month < 1) || (month > 12))
	{
		cout << "An invalid month has been entered. " << endl;
	}
	else
	{
		cout << "A valid month of " << month << " was entered" << endl;
	}
	if ((day < 1) || (day > 31))
	{
		cout << "An invalid day has been entered." << endl;
	}
	system("pause");
	return 0;
}