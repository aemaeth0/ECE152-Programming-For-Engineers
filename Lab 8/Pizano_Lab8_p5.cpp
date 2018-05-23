/* Al Pizano */
/* Lab 8 Problem 5 */
/* 4/2/2017 */

#include <iostream>
using namespace std;

int main()
{
	double miles[] = { 240.5,300,189.6,310.6,280.7,206.9,199.4,160.3,177.4,192.3 };
	double gallons[] = { 10.3,15.6,8.7,14,16.3,15.7,14.9,10.7,8.3,8.4 };
	double mpg[10];
	for (int i = 0; i<10; i++)
	{
		*(mpg + i) = (*(miles + i)) / (*(gallons + i));
		cout << *(mpg + i) << '\n';
	}
	system("pause");
	return 0;
}