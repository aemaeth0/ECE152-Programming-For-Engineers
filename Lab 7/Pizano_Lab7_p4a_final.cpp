#include <iostream>
#include <cstdlib>   
#include <ctime>
using namespace std;

#define ROWS 10
#define COLUMN 20
void findmax(int(*a)[COLUMN]);
int main()
{
	int a[10][20];
	srand(time(NULL));
	for (int i = 0; i<10; i++) {
		for (int j = 0; j<20; j++) {
			a[i][j] = rand() % (100+1);
			cout << a[i][j] << " ";
		}
		cout << " \n";
	}
	findmax(a);
	system("pause");
	return 0;
}

void findmax(int(*a)[COLUMN]) {
	int max = a[0][0];
	int row = 0;
	int col = 0;
	for (int i = 0; i<ROWS; i++) {
		for (int j = 0; j<COLUMN; j++) {
			if (max < a[i][j]) 
			{
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}
	cout << "\n\n";
	cout << "Max value of two dimensional array is: " << max << endl;

}