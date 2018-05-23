/* Al Pizano */
/* Lab 9 Problem 1 */
/* 4/9/2017 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int days(struct Date, struct Date);

struct Date
{
	int month;
	int day;
	int year;
};

int main()

{
	int ans = 0;
	Date fixed, temp;
	fixed.month = 1;
	fixed.day = 1;
	fixed.year = 1900;
	cout << "Enter the day (ie. 30): ";
	cin >> temp.day;
	cout << "\nEnter the month (ie. 04): ";
	cin >>  temp.month;
	cout << "\nEnter the year (ie. 1999): ";
	cin >> temp.year;
	ans = days(fixed, temp);
	cout << "\nNumber of days since January 1, 1900 is equal to: " << ans << "\n";

	system("pause");
	return 0;
}

int days(Date fixed, Date temp)
{
	int a = 0;
	a = (temp.year - fixed.year) * 360 + (temp.month - fixed.month) * 30 + (temp.day - fixed.day);
	return a;
}
