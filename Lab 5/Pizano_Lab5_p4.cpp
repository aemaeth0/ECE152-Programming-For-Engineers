#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int rand_1, rand_2, correct, ans;
	for(correct=0; correct < 10; correct++)
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
				break;
			}
			else
			{
				cout << "No. Please try again." << endl;
				continue;
			}
		}
	}
	system("pause");
	return 0;
}