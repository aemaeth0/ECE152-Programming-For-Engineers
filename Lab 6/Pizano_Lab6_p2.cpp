/* Al Pizano */
/* Lab 6 */
/* Problem 2 */

#include <iostream>
#include <cmath>
using namespace std;
void yearCalc(int, int&, int&, int&);

int main()
{
	int total, y, m, d;

	cout << "Enter the total number of days: " << endl;
	cin >> total;
	yearCalc(total, y, m, d);
	system("pause");
	return 0;
}

void yearCalc(int totalDays, int& year, int& month, int& day)
{
int temp;
year = (totalDays / 365);
temp = totalDays - (365 * year);
month = (temp / 30);
day = (temp - (30 * month));
year = year + 1900;
cout << "The current year is: " << year << endl;
month = month + 1;
cout << "The month is: " << month << endl;
day = day + 1;
cout << "The day is: " << day << endl;
return;
}