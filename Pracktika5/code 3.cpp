#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter a" << "\n";
    cin >> a;
    cout << "Enter b" << "\n";
    cin >> b;
    cout << "Enter c" << "\n";
    cin >> c;

    for (int i = a; i <= b; i += c) {
        double x = i;
        double y;

        y = pow(x, 3/4) + 6;

        cout << y << "\n";

        while (y == 0)

            cout << "error";
    }

    return 0;
}