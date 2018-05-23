#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double pay, hours, rate;
	hours = 1;

	while (hours > 0)
	{
		cout << "Please enter hours worked: " << endl;
		cin >> hours;
		if (hours<0)
			break;
		cout << "Please enter hourly rate for worker: ";
		cin >> rate;
		if (hours <= 40)
		{
			pay = hours*rate;
			cout << "The calculated salary is: " << pay << endl;
		}
		else if (hours > 40)
		{
			pay = (40 * rate) + ((hours - 40)*(rate * 1.5));
			cout << "The calculated salary is: " << pay << endl;
		}

	}
	system("pause");
	return 0;
}