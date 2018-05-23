#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double money_start;
	double interest;
	int MAXNUM;
	int count;
	double total;
	
	cout << "Please enter the maximum of years to be displayed: ";
	cin >> MAXNUM;
	cout << "Please enter the amount of money you are starting with: ";
	cin >> money_start;
	cout << "Please input the interest rate to be used in decimal format (for example, 0.08 would be 8%): ";
	cin >> interest;

	count = 1;
	

	while (count <= MAXNUM)
	{

		total = money_start*interest;
		cout << "Money available is $" << total << " after year " << count << "." << endl;
		money_start = money_start + total;
		count++;
	}
	system("pause");
	return 0;
}