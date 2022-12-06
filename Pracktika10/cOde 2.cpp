#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 7;
	int arr[lenght];
	int a;
	
	cout << "Введіть число a : ";
	cin >> a;

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() / a);
	}

	cout << "Масив, наповнений числами від 0 до " << a << "):\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}
}