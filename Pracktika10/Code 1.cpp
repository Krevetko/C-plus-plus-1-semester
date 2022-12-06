#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void) {
	const int lenght = 5;
	int arr[lenght];

	for (int  i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % 100) + -(rand() % 100);
	}

	cout << " Масив наповнений числами від -100 до 100:\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << "\n Sorting... \n" ;
	
	for(int i = 1; i < lenght; i++){
	    for(int j = i; j > 0 && arr[j - 1] > arr[j]; j--){
	        swap(arr[j-1], arr[j]);
	        for (int i = 0; i < lenght; i++)
        	{
            	cout << arr[i] << " ";
            }
            cout << "\n";
	    }
	}
	
	cout << " Sorting is done \n" ;

	return 0;
}