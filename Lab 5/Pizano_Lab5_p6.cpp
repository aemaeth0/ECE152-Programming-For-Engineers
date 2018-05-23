#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	double PERCENT, correct, WRONGattempt, TOTALnumANSWERS;
	int rand_1, rand_2, ans;
	WRONGattempt = 0;
	correct = 0;
	PERCENT = 0;
	for (; correct < 10.0;)
	{
		srand(time(0));
		rand_1 = (rand() % 9) + 1;
		rand_2 = (rand() % 9) + 1;
		cout << "How much is " << rand_1 << " times " << rand_2 << " ? " << endl;

		while (correct < 10)
		{
			cin >> ans;
			if (ans == rand_1*rand_2)
			{
				cout << "Very good!" << endl;
				correct = correct + 1.0;
				break;
			}
			else
			{
				cout << "No. Please try again." << endl;
				WRONGattempt++;
				continue;
			}
		}
	}
	TOTALnumANSWERS = correct + WRONGattempt;
	PERCENT = correct / TOTALnumANSWERS*100.0;
	cout << " " << endl;
	cout << "correct=" << correct << endl;
	cout << " " << endl;
	cout << "WRONGattempt=" << WRONGattempt << endl;
	cout << " " << endl;
	cout << "TOTALnumANSWER=" << TOTALnumANSWERS << endl;
	cout << " " << endl;
	cout << "The correct percentage of answers is: " << PERCENT << "." << endl;
	cout << " " << endl;

	if (PERCENT <= 75.0)
		cout << "Please ask your instructor for help." << endl;
	system("pause");
	return 0;
}