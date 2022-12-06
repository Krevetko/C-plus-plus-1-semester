#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int m = 3;
    int n = 3;
    int mas[m][n] = {
                        {1, 2, 3},
                        {4, 10, 5},
                        {6, 7, 8},

    };
    int diagonal;

    for (int i = 0; i < m; i++) {
        cout << '\n';
        for (int j = 0; j < n; j++)
            cout << mas[i][j] << " ";
    }

    for (int i = 0; i < n; i++) {
        diagonal += mas[i][i];
    }
    cout << "\n сума діагоналі " << diagonal;

    return 0;
}