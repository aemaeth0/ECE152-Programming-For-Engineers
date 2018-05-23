/* Al Pizano */
/* Lab 9 Problem 2 */
/* 4/9/2017 */

#include <iostream>
#include <iomanip>
using namespace std;

struct Date
{
	int month;
	int day;
	int year;

};

int difDays(Date d1, Date d2);

int main()
{
	Date d1;
	Date d2;
	cout << "Enter date 1 in mm dd yyyy format: ";
	cin >> d1.month >> d1.day >> d1.year;
	cout << "\nEnter date 2 in mm dd yyyy format: ";
	cin >> d2.month >> d2.day >> d2.year;

	cout << "\nThe difference between the two dates is: " << difDays(d1, d2) << " day(s)" << endl;
	system("pause");
	return 0;
}

int difDays(Date date1, Date date2)
{
	int totalDays = 0;
	totalDays += abs(date1.year - date2.year) * 360;
	totalDays += abs(date1.month - date2.month) * 30;
	totalDays += abs(date1.day - date2.day);

	return totalDays;
}