/* Al Pizano */
/* Lab 10 Problem 5 */
/* 4/16/2017 */

#include<iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {

	ifstream inputFile;
	inputFile.open("D:\\verse.txt");
	ofstream outputFile;
	outputFile.open("D:\\verse_output.txt");
	char output[100];
	if (inputFile.is_open()) {
		string line;

		while (std::getline(inputFile, line))
		{

			string newLine = "";
			bool removed = false;
			char ch;
			for (int i = 0; i<line.length(); i++) {
				ch = line[i];
				if (ch != ' ' && !removed) {
					removed = true;

				}
				if (removed) {
					newLine = newLine + ch;
				}
			}
			cout << line << endl;
			cout << newLine << endl;
			outputFile << newLine << endl;

		}
	}
	cout << "File has been generated." << endl;
	inputFile.close();
	outputFile.close();
	return 0;
}