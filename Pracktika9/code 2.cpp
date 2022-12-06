#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void) {
	const int lenght = 12;
	int arr[lenght];

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100) + -(rand() % 100);
	}

	cout << "Масив наповнений числами від -100 до 100 :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] < 0) 
		{
			arr[i] = 0;
		}
	}

	cout << "\n Від'ємні числа заміняются на 0\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}