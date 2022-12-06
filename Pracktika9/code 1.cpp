#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void) {
	const int lenght = 12;
	int arr[lenght];

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100);
	}

	cout << "Масив наповнений числами до 100 :\n";

	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
	}

	sort(arr, arr + lenght);

	cout << "\n Відсортований масив  :\n";

	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}