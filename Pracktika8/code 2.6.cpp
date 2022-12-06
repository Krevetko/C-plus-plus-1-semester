#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;

    cin >> n;

    while (n != 1) {

        if (n > 0 && (n % 2) == 0) {
            n = n / 2;
            cout << n << "\n";
            count++;
        }
        else if (n > 0 && (n) != 0) {
            n = n * 3 + 1;
            cout << n << "\n";
            count++;
        }
    }

    cout << "count= " << count;

    return 0;
}