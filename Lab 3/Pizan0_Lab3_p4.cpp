#include <iostream>
using namespace std;

int main() {
	int R = 4;

	for (int x = 0; x <= 2 * R; x++) {
		for (int y = 0; y <= 2 * R; y++) {
			if (x <= R) {
				if (y < R - x || y > R + x) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
			}
			else {
				if (y < x - R || y > 3 * R - x) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}