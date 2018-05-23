#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int grade;
	int total = 0;
	double avg;
	double count = 0;

	while (total <= 999)
	{
		cout << "Please enter a grade: ";
		cin >> grade;
		total = total + grade;
		count = count + 1;
		cout << "Total grade is currently " << total << ". \n" << endl;

		if (total >= 999)
		{
			avg = total / count;
			cout << "Average grade for valid grades entered is: " << avg << "%" << endl;
			cout << "Total grade now exceeds 999. Exiting the loop now. \n" << endl;
		}

		else if (grade < 0 || grade > 100)
		{
			cout << "You entered an invalid grade. Please re-enter a grade." << endl;
		}
		continue;
	}
	system("pause");
	return 0;
}