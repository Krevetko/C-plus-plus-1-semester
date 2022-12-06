#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 5;
    int b = 7;
    int mas[a][b] = {
                        {1, 2, 3, 4, 5, 8, 9,},
                        {4, 5, 5, 6, 7, 9, 10,},
                        {6, 7, 8, 9, 10, 6, 11,},
                        {9, 10, 11, 18, 19, 20, 25},
                        {12, 13, 15, 16, 18, 25, 32},

    };
    int c = 0;
    for (int i = 0; i < a; ++i) {
        c = 0;
        for (int j = 0; j < b; ++j)
            c += mas[i][j];
        cout << "for " << i + 1 << " c = " << c << endl;
    }

    return 0;
}