/* Al Pizano */
/* Lab 7 Problem 6 */
/* March 27 2017 */

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;

int main()
{
	int dice, sum, i, j, k, max = 36000, count[11] = { 0 };
	double expected[11], actual, percent;
	srand(time(0));
	
	for (k = 2; k <= 12; k++)
	{
		expected[k - 2] = 0;
		for (i = 1; i <= 6; i++)
			for (j = 1; j <= 6; j++)
			{
				if (i + j == k)                 
					expected[k - 2]++;
			}
	}
	sum = 0;
	for (i = 0; i<11; i++)
		sum += expected[i];                
	percent = 1. / sum;                      
	for (i = 2; i<13; i++)
	{
		cout << expected[i - 2] << endl;
		expected[i - 2] = percent*expected[i - 2] * 100.;
		cout << i << "" << sum << " " << expected[i - 2] << endl;
	}
	for (i = 0; i<max; i++)
	{
		dice = (rand() % 6 + 1) + (rand() % 6 + 1);
		count[dice - 2]++;
	}
	cout << "Sum\tTotal\tExpected\tActual\n";
	for (i = 2; i<13; i++)
	{
		actual = (count[i - 2] / 36000.)*100.;
		cout << setw(3) << i << setw(10) << count[i - 2] << setw(10) << setprecision(3) << fixed;
		cout << expected[i - 2] << "%" << setw(13) << actual << "%\n";

	}
	system("pause");
	return 0;
}
