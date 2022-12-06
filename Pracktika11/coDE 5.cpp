#include <climits> 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 3;
    int b = 4;
    int mas[a][b] = {
                        {1, 2, 3, 4},
                        {4, 10, 5, 6},
                        {6, 7, 8, 9},

    };
    int max = INT_MAX;

    for (int i = 0; i < a; i++) {
        cout << '\n';
        for (int j = 0; j < b; j++)
            cout << mas[i][j] << " ";
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            if (mas[i][j] > max)
                max = mas[i][j];
    }

    cout << "\n max " << max;

    return 0;
}