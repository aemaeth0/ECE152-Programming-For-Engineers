#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double money_start;
	double interest_rate;
	double yearly_interest;
	int MAXNUM;
	int count;

	cout << "Please enter the maximum of years to be displayed: ";
	cin >> MAXNUM;
	cout << "Please enter the amount of money you are starting with: ";
	cin >> money_start;
	cout << "Please input the interest rate to be used in decimal format (for example, 0.08 would be 8%): ";
	cin >> interest_rate;

	count = 1;

	while (count <= MAXNUM)
	{
		yearly_interest = money_start*interest_rate;
		money_start = money_start + yearly_interest;
		cout << "Money available is $" << money_start << " dollars" << " after year " << count << "." << endl;
		count++;
	}
	system("pause");
	return 0;
}