#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	int INFINITY;
	int book_id = 0;
	int inv_beg = 0;
	int inv_sum = 0;
	int cop_rec = 0;
	int cop_sold = 0;
	int new_bal = 0;
	int count = 0;
	

		while (count < INFINITY)
		{
			cout << "Enter the book ID: ";
			cin >> book_id;
			if (book_id >= 999)
			{
				cout << "Sentinel identification value exceeds 999." << endl;
				break;
			}
			cout << "Enter the inventory at the beginning of month: ";
			cin >> inv_beg;
			cout << "Enter the # of copies received: ";
			cin >> cop_rec;
			cout << "Enter the # of copies sold: ";
			cin >> cop_sold;

			new_bal = inv_beg + (cop_rec - cop_sold);
			inv_sum = inv_sum + inv_beg;
			cout << "The updated inventory balance for book ID " << book_id << " is " << new_bal << endl;
			cout << inv_sum;
			
			count++;
		}
		system("pause");
		return 0;
}

