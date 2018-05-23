/* Al Pizano */
/* Lab 6 */
/* Problem 5 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int array = 8;
	int grade[array];
	int total = 0;
	double average = 0.0;

for (int k = 0; k < array; k++)
{
	cout << "Enter a grade: " << endl;
	cin >> grade[k];
	total = total + grade[k];
}
cout << "The average of grades";

for (int k = 0; k < array; k++)
{
	cout << " "<< grade[k];
}

cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);

average = total / double(array);
cout << " is " << average << endl;
system("pause");
return 0;
}