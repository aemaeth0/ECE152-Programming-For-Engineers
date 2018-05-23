/* Al Pizano */
/* Lab 8 Problem 2a */
/* 4/2/2017 */

#include <iostream>
using namespace std;

int main()
{
	int array[5];

	for (int i = 0; i<5; i++) {
		cout << "Enter a number: ";
		cin >> *(array + i);
	}
	cout << "\nThe array elements are: " << endl;
	for (int i = 0; i<5; i++) {
		cout << *(array + i) << " ";
	}

	cout << endl << "\nThe reverse array elements are: " << endl;
	for (int i = 4; i >= 0; i--) {
		cout << *(array + i) << " ";
	}

	cout << "\n" << endl;

	system("pause");
	return 0;
}