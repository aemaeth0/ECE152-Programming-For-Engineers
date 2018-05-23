int score = 0;
int playerTotal = 0;
int playerAvg = 0;
int teamTotal = 0;

for (int i = 0; i<5; i++)
{
	for (int x = 0; x<3; x++)
	{
		cout << "please enter a score: ";
		cin >> score;
		playerTotal = playerTotal + score;
	}
	playerAvg = playerTotal / 3;
	teamTotal = teamTotal + playerTotal;
	playerTotal = 0;
	cout << playerAvg << endl;
}
cout << teamTotal << endl;