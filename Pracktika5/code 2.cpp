#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int b = 0;

    for (int a = 0; a <= 100; a++) {
        if (a % 2 != 0) {
            b += a;
            cout << b << "\n";
        }
    }

    return 0;
}