/* Al Pizano */
/* Lab 7 Problem 2 */
/* March 26 2017 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int size = 15;
	int grades[size];
	double deviation[size];
	int k;
	double total = 0;
	double avg;
	int var = 0;
	cout << "Enter 15 grades for this array: " << endl;
	for (k = 0; k < 15; k++)
	{
		cin >> grades[k];
		total = total + grades[k];

	}
	avg = total / size;

	for (k = 0; k < size; k++)
	{
		deviation[k] = grades[k] - avg;
		var += deviation[k] * deviation[k];
	}
	var = var / k;
	cout << "Variance of the data is: " << var << endl;
	for (k = 0; k < size; k++)
	{
		cout << "The deviation of grade " << grades[k] << " is " << deviation[k] << endl;
	}
	system("pause");
	return 0;
}