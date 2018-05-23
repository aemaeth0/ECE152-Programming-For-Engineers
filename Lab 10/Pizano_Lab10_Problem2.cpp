/* Al Pizano */
/* Lab 10 Problem 2 */
/* 4/16/2017 */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	string input, output;
	cout << "Enter the input file name: ";
	cin >> input;

	ifstream inputFile;
	inputFile.open(input);
	int lineCount = 0;
	string line;
	if (inputFile.is_open()) {
		string line;
		while (getline(inputFile, line))

		{
			lineCount++;

			cout << lineCount << "\t" << line << endl;
		}
	}
	inputFile.close();
	return 0;
}