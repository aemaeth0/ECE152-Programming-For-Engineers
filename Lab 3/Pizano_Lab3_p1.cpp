#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	
	int gallons = 10;
	
	while (gallons <= 20)
	{
		double liters = gallons*3.785;
		cout << gallons << " gallons is equivalent to " << liters << " liters" << endl;
			gallons++;
	}
	system("pause");
	return 0;
}