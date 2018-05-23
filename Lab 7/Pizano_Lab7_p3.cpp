/* Al Pizano */
/* Lab 7 Problem 3 */
/* March 26 2017 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double extend(double[], double[], double[]);
const int arraySize = 10;


int main()
{
	const int arraySize = 10;
	double price[arraySize] = { 10.64, 14.89, 15.21, 74.21, 23.8, 61.26, 92.37, 12.73, 2.99, 58.98 };
	double quantity[arraySize] = { 4,8,17,2,94,61,20,78,55,41 };
	double amount[arraySize];

	amount[arraySize] = extend(price, quantity, amount);
	cout << setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint)
		<< setprecision(2);
	for(int k=0; k < arraySize; k++)
	{
		cout << "Amount in element " << k << " is $" << amount[k] << "." << endl;
	}
	system("pause");
	return 0;
	
}

double extend(double p[], double q[], double a[])
{
	for (int k = 0; k < arraySize; k++)
	{
		a[k] = p[k] * q[k];
	}
	return a[arraySize];				
}