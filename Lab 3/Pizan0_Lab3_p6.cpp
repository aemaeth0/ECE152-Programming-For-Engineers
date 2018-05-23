#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c, a, b;

	for (c = 1; c <= 1000; c++)
	{
		for (a = 1; a <= 1000; a++)
		{
			for (b = 1; b <= 1000; b++)
			{
				if (c == pow((pow(a, 2) + pow(b, 2)), 0.5))
					cout << c << "             " << a << "           " << b << endl;
			}
		}
	}
	system("pause");
	return 0;
}
