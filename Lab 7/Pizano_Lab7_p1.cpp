/* Al Pizano */
/* Lab 7 Problem 1 */
/* March 26 2017*/

#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int pos;
	int fmax[10];
	cout << "Enter the values into this array: " << endl;
	for (int count = 0; count < 10; count ++)
	{
		cin >> fmax[count];
			if (fmax[count] > max)
			{
				max = fmax[count];
				pos = count + 1;
			}
	}
	cout << "The maximum value is: " << max << endl;
	cout << "This is element number " << pos << " in the list of numbers." << endl;
	system("pause");
	return 0;
}
