/* Al Pizano */
/* Lab 6 Problem 1*/
/* 2/27/2017 */

#include <iostream>
using namespace std;
void change(int, int&, int&, int&, int&, int&, int&);


int main()
{
	int hun, fif, twe, ten, fiv, one;
	int money;
	cout << "Enter money to calculate change: " << endl;
	cin >> money;
	change(money, hun, fif, twe, ten, fiv, one);
	system("pause");
	return 0;
}

void change(int num, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{
	hundreds = (num / 100);
	cout << "Hundreds: " << hundreds << endl;
	fifties = ((num - (hundreds * 100)) / 50);
	cout << "Fifties: " << fifties << endl;
	twenties = ((num - (hundreds * 100) - (fifties * 50)) / 20);
	cout << "Twenties: " << twenties << endl;
	tens = ((num - (hundreds * 100) - (fifties * 50) - (twenties * 20)) / 10);
	cout << "Tens: " << tens << endl;
	fives = ((num - (hundreds * 100) - (fifties * 50) - (twenties * 20)-(tens * 10)) / 5);
	cout << "Fives: " << fives << endl;
	ones = ((num - (hundreds * 100) - (fifties * 50) - (twenties * 20)-(tens * 10)-(fives * 5)) / 1);
	cout << "Ones: " << ones << endl;
}