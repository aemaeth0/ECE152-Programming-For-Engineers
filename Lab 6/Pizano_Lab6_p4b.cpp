/* Al Pizano */
/* Lab 6 Problem 4b*/
/* 2/27/2017 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int SIZE = 9;
	double prices[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		cout << "Enter a price: " << endl;
		cin >> prices[i];
	}
	cout << "The entered values are: " << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << " " << prices[i] << " ";
		i++;
		cout << prices[i] << " ";
		i++;
		cout << prices[i] << endl;
	}
	system("pause");
	return 0;
}