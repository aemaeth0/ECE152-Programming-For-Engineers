#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double salary1;
	double salary2;
	double hours;
	cout << "Enter hours worked: ";
	cin >> hours;


	if (hours <= 40)
	{
		salary1 = 8 * hours;
		cout << "Your weekly salary is: $ " << salary1 << endl;
	}
	else if (hours > 40)
	{
		salary2 = (12 * (hours-40)) + 320; 
		cout << "Your weekly salary is: $" << salary2 << endl;
	}
	system("pause");
	return 0;
}