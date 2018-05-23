#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int Rnum, guess;
	srand(time(0));
	Rnum = (rand() % 100) + 1;

		cout << "I have a number between 1 and 100" << endl;
		cout << "Can you guess my number" << endl;
		cout << "Please type your first guess." << endl;
		cout << " " << endl;
			cin >> guess;

		while (guess != Rnum)
		{
			if (guess > Rnum)
			{
				cout << "Too High." << endl;
			}
			else
			{
				cout << "Too Low." << endl;
			}
			cin >> guess;
		}

		cout << "Excellent. You guessed the number." << endl;
		system("pause");
		return 0;

}