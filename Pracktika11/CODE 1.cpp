#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a = 4;
    int b = 3;
    int mas[a][b] = {
                        {1, 2, 3},
                        {4, 4, 4},
                        {6, 7, 8},
                        {9, 10, 11},
                    };
    int c = 0;
    for(int i = 0; i < a; ++i){
        c = 0;
        for(int j = 0; j < b; ++j)
        if(mas[i][j] % 2 == 0)
        c++;
        cout << "for " << i+1 << " c = " << c << endl;
    }
    
    return 0;
}