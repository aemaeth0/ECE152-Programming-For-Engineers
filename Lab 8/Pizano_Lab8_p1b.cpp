/* Al Pizano */
/* Lab 8 Problem 1b */
/* April 2 2017 */

#include <iostream>
using namespace std;
void display(char *, int);

int main()
{
	const int maxChars = 20;
	char message[maxChars] = "Vacation is near";
	display(message, maxChars);
	system("pause");
	return 0;
}

void display(char *strng, int n)
{
	for (int i = 0; i < n; i++, strng++)
		cout << *strng;
	cout << endl;
}