#include <iostream>
#include <cmath>
using namespace std;
int check(int, double);

int main()
{
	int temp;
	temp=check(5, 3);
	cout << temp << endl;
	system("pause");
		return 0;
}
int check(int i, double d)
{
	int x;
	double y;
	cout << "Enter an integer number: ";
	cin >> x;
	cout << x << endl;
	cout << "Enter an double number: ";
	cin >> y;
	cout << y << endl;

	return 0;
}