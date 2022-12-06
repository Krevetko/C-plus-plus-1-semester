#include <iostream>

using namespace std;

int main(void) {
    int x;
	int number;
	int tagnum = 0;
	int cnumber = 1;
	int a = 10;
	int count = 1;
	
    cin >> number;
	cout << "Number\t" << "place" << endl;

	cout << number % a;

	cout << '\t' << cnumber;

	cout << '\n';

	while (cnumber != 0)
	{
	    x = number / a % 10;

		cout << x;

		count++;

		cout << '\t' << count;

		a *= 10;

		cout << '\n';

		if (x > 3)
		{
			tagnum ++;
		}

		cnumber = number / a;
	}

	cout << "<more than 3> : " << tagnum;
	
	return 0;
}
