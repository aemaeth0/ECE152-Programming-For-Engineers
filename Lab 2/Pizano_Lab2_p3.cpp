#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double t;
	cout << "Please enter the amount of time the money is left on deposit: ";
	cin >> t;

	if (t >= 5)
	{
		cout << "The corresponding interest rate is 4.5 percent" << endl;
	}
	if ((t<5) && (t >= 4))
	{
		cout << "The corresponding interest rate is 4.0 percent" << endl;
	}
	if (t<4 && t >= 3)
	{
		cout << "The corresponding interest rate is 3.5 percent" << endl;

	}
	if (t<3 && t >= 2)
	{
		cout << "The corresponding interest rate is 2.5 percent" << endl;

	}
	if (t<2 && t >= 1)
	{
		cout << "The corresponding interest rate is 2.0 percent" << endl;

	}
	if (t<1)
	{
		cout << "The corresponing interest rate is 1.5 percent" << endl;
	}
	system("pause");
	return 0;
}