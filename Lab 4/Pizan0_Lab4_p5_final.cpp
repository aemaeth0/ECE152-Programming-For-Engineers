#include <iostream>
#include <cmath>
using namespace std;
int findAbs(double);

int main()
{
	findAbs(-99999.50);
	system("pause");
	return 0;
}

int findAbs(double n)
{
	double m;
	double answr;

	if (n < 0)
	{
		m = abs(n);
		answr = m;
	}
	else
	{
		answr = n;
	}
	cout << answr << endl;
	return 0;
}