#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int matrix;
	cout << "Please enter disk drive shipment code: ";
	cin >> matrix;

	switch (matrix)
	{
	case 1: cout << "3M Corporation" << endl; break;
	case 2: cout << "West Digital Corporation" << endl; break;
	case 3: cout << "Seagate Corporation" << endl; break;
	case 4: cout << "Verbatim Corporation" << endl; break;
	default: cout << "No matches found" << endl;
	}
	system("pause");
	return 0;
}