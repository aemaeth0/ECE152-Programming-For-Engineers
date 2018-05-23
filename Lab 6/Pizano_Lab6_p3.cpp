/* Al Pizano */
/* Lab 6 */
/* Problem 3 */

#include <iostream>
#include <cmath>
using namespace std;
void liquid(int, int&, int&, int&, int&);

int main()
{
int totalCups,gallons,quarts,pints,cups;
cout << "Enter the total # of cups: " << endl;
cin >> totalCups;

liquid(totalCups, gallons, quarts, pints, cups);
cout << totalCups << " cups have " << gallons << " gallon(s) " << quarts << " quart(s) " << pints << " pint(s) and " << cups << " cup(s) " << endl;
system("pause");
return 0;
}

void liquid(int maxCups, int& g, int& q, int& p, int& c)
{
	g = maxCups / 16;
	maxCups = maxCups % 16;
	q = maxCups / 4;
	maxCups = maxCups % 4;
	p = maxCups / 2;
	maxCups = maxCups % 2;
	c = maxCups;
	return;
}