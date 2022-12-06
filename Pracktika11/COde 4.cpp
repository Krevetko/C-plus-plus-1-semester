#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    int mas[a][b] = {
                        {1, 2, 3, 4, 5, 8},
                        {4, 5, 5, 6, 7, 9},
                        {6, 7, 8, 9, 10, 6},
                        {9, 10, 11, 18, 19, 20},

    };
    int c = 0;
    for (int i = 0; i < b; ++i) {
        c = 0;
        for (int j = 0; j < a; ++j)
            c += mas[j][i];
        cout << "for " << i + 1 << " c = " << c << endl;
    }

    return 0;
}