#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void removeSpaces(string &str)
{
	while (str.at(0) == ' ')
		str = str.substr(1);
}
using namespace std;
int main()
{
	ifstream file;
	file.open("verse.txt");
	string input;
	int lines = 0;
	while (getline(file, input))
	{
		removeSpaces(input);
		cout << input << endl;
		lines++;
	}
	file.close();
	system("pause");
	return 0;
}