/* Al Pizano */
/* Lab 10 Problem 3 */
/* 4/16/2017 */

#include <iostream>
#include <fstream>
#include <iomanip>
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
using namespace std;

int main()
{
	ifstream dataIn;
	int carnumber, milesdriven, gallonsused, carnum[5], milesd[5], gallons[5];
	int i = 0;
	double totmiles = 0.0;
	double totgallons = 0.0;
	dataIn.open("D:\\cardetails.txt");

	while (dataIn >> carnumber >> milesdriven >> gallonsused)
	{
		carnum[i] = carnumber;
		milesd[i] = milesdriven;
		totmiles += milesd[i];
		gallons[i] = gallonsused;
		totgallons += gallons[i];
		i++;
	}
	cout << " Car Number\t" << " Miles Driven\t" << " Gallons Used\n";
	for (int i=0; i<ARRAY_SIZE(carnum); i++)
	{
		cout << "\t" << carnum[i] << "\t" << "\t" << milesd[i] << "\t" << "\t" << gallons[i] << "\n";
	}
	cout << "\n\nTotal miles driven is :" << totmiles;
	cout << "\nTotal gallons used is :" << totgallons;
	cout << "\nAverage miles per gallon is :" << std::setprecision(2) << totmiles / totgallons;
	dataIn.close();
	return 0;
}