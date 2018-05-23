/* Al Pizano */
/* Lab 9 Problem 3 */
/* 4/9/2017 */

#include <iostream>
using namespace std;

struct Date
{
	int year, month, day;
};

Date older(Date d1, Date d2)
{
	if (d1.year>d2.year)
		return d2;
	else if (d1.year<d2.year)
		return d1;
	else
	{
		if (d1.month>d2.month)
			return d2;
		else
			return d1;
	}
}

int main() 
{
	Date d1, d2, d;
	d1.year = 2000;
	d1.month = 4;
	d1.day = 30;
	d2.year = 1999;
	d2.month = 5;
	d2.day = 20;
	d = older(d1, d2);
	cout << "The older birthdate is: " << d.day << "-" << d.month << "-" << d.year << endl;
	
	system("pause");
	return 0;
}