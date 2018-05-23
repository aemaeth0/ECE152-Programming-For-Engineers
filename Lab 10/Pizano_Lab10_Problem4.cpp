/* Al Pizano */
/* Lab 10 Problem 4 */
/* 4/16/2017 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream outputFile;
	outputFile.open("text.dat");
	string s;
	cout << "Enter the string: ";
	getline(cin, s);
	while (s != "") {

		outputFile << s << endl;
		cout << "Enter the string: ";
		getline(cin, s);
	}
	cout << "File has been generated." << endl;
	outputFile.close();
	return 0;
}