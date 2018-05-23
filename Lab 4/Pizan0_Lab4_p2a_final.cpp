#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int score = 0;
	int total_score = 0;
	int avg_score = 0;
	int team_score = 0;

	for (int bowlers = 0; bowlers<5; bowlers++)
	{
		for (int games = 0; games<3; games++)
		{
			cout << "Please enter a game score for the bowler: ";
			cin >> score;
			total_score = total_score + score;
		}
		avg_score = total_score / 3;
		team_score = team_score + total_score;
		total_score = 0;
		cout << "The average score for this bowler is: " << avg_score << endl;
	}
	system("pause");
	return 0;
}