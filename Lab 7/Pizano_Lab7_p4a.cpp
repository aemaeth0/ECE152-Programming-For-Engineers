/* Al Pizano */
/* Lab 7 Problem 4 */
/* March 26 2017 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int findmax(int array[][20]);

int main()
{
	srand(time(NULL));

	const int row = 10;
	int array[row][20];

	for (int k = 0; k < row; k++)
	{
		for (int i = 0; i < 20; i++)
		{
			array[k][k] = rand() % (100 + 1);
			cout << array[k][k] << " ";
		}
		cout << endl;
	}
	int max1 = findmax(array);
	cout << "The maximum value is " << max1 << endl;

	system("pause");
	return 0;
}

int findmax(int array[][20])
{
		int i, j;
		int max = array[0][0];

		for (i = 1; i < 10; i++)
			for (j = 1; j < 20; j++)
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
		return max;
	}