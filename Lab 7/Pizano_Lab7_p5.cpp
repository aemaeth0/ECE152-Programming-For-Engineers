/* Al Pizano */
/* Lab 7 Problem 5 */
/* March 26 2017 */

#include <iostream>
using namespace std;

int main()
{
	const int size = 20;
	int array[size] = { 0 };
	int x;
	int y;
	int z = 0;
	int val_rep;
	int val;

	cout << "Enter " << size << " numbers between 10 and 100."<< endl;


	for (x = 0; x <= size - 1; x++)
	{
		val_rep = 0;
		cin >> val;


		if (val >= 10 && val <= 100)
		{
			for (y = 0; y < z; y++)
			{


				if (val == array[y])
				{
					val_rep = 1;
					cout << "Number is a duplicate of a number already read. Try again." << endl;
					break;
				}

			}
			if (!val_rep)
			{
				array[z++] = val;
			}
		}
		else
			cout << "Number is not between 10 and 100. Try again." << endl;

	}

	cout << "The values after removing duplicates are: " << endl;


	for (x = 0; (array[x] != 0 && x<size); x++)
	{
		cout << array[x] << " ";
	}

	cout << "\n";

	system("pause");
	return 0;
}