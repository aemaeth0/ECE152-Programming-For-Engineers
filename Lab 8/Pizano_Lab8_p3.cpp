/* Al Pizano */
/* Lab 8 Problem 3 */
/* 4/2/2017 */

#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str);

int main()
{
	const int maxChars = 99999;
	char str[maxChars];
	cout << "Enter a string:";
	cin >> str;
	reverse(str);
	system("pause");
	return 0;
}

void reverse(char str[])
{
	int length = 0;
	while (*str != '\0')
	{
		cout << *(str);
		length++;
		str++;
	}
	cout << "\nReverse string:";

	while (length >= 0) {
		cout << *(str);
		str--;
		length--;
	}
	cout << endl;
}