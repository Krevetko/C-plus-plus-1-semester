#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 6;
    int b = 4;
    int mas[a][b] = {
                        {1, 2, 3, 4},
                        {4, 5, 5, 6},
                        {6, 7, 8, 9},
                        {9, 10, 11, 18},
                        {12, 13, 15, 16},
                        {20, 24, 25, 30},
    };
    int c = 0;
    for (int i = 0; i < b; ++i) {
        c = 0;
        for (int j = 0; j < a; ++j)
            if (mas[j][i] % 2 == 0)
                c++;
        cout << "for " << i + 1 << " c = " << c << endl;
    }

    return 0;
}