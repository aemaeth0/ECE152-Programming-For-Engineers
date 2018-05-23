/* Al Pizano */
/* Lab 10 Problem 1 */
/* 4/16/2017 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	string fileName;
	cout << "Enter the name of file with employee data (i.e. D:\\employee.txt): ";
	cin >> fileName;
	fin.open(fileName);
	if (fin.fail())
	{
		cout << "Unable to open the input file." << endl;
		return 0;
	}
	cout << "Enter the name of file to create an employee backup with .bak extension name (i.e. employee.bak): ";
	cin >> fileName;
	fout.open(fileName);
	if (fout.fail())
	{
		cout << "Unable to create the output file. " << endl;
		return 0;
	}
	while (!fin.eof())
	{
		string line;
		getline(fin, line);
		fout << line << endl;
		cout << line << endl;
	}
}