#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int indv_score = 0;
	int avg_score = 0;
	int game_score = 0;
	int total_avg_score = 0;
	int team_score = 0;
	int end;

	for (int game = 0; game < 3; game++)
	{
		for (int bowlers = 0; bowlers < 5; bowlers++)
		{
			cout << "Please enter a scores for bowlers 1 to 5: ";
			cin >> indv_score;
			team_score = team_score + indv_score;
			
		}
		avg_score = team_score/5;
		game_score = game_score + team_score;
		cout << "The average team score for this game is: " << avg_score << endl;
		team_score = 0;
		total_avg_score = total_avg_score + avg_score;
		end = total_avg_score / 3;
	}
	cout << "The average team score for all 3 games is: " << end << endl;
system("pause");
return 0;
}