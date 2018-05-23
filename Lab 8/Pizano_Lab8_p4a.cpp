/* Al Pizano */
/* Lab 8 Problem 4a */
/* Mach 27 2017 */

#include<iostream>
#include<string>
using namespace std;

int main() {

	char str[] = "C plus plus is a simple programming language";
	char *pt;
	pt = str;
	int i;

	for (i = 0; *(pt + i) != '\0'; i++) 
	{	
		if (*(pt + i) == 'a') {
			break;
		}
	}

	cout << (str + i) << endl;

	system("pause");
	return 0;
}