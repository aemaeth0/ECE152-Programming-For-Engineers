/* Al Pizano */
/* Lab 10 Problem 6 */
/* 4/16/2017 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inputFileStream;
	ofstream outputFileStream;
	int blankspaces=0;

	inputFileStream.open("D:\\verse.txt");
	if (inputFileStream.fail())
	{
		cout << "Input file could not be opened." << endl;
	}
	outputFileStream.open("D:\\verse_output.txt");
	if (outputFileStream.fail());
	{
		cout << "Output file could not be opened." << endl;
	}

	cout << "Number of blanks removed is: " << blankspaces << endl;

	inputFileStream.close();
	outputFileStream.close();

	system("pause");
	return 0;
}