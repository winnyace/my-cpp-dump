#include <iostream>
using namespace std;

void duplicare(int n, int& d)
{
    int nou_n = 0, p = 1;
    bool sw = false;
    while (n != 0) {
        if (n % 10 % 2 != 0) {
            sw = true;
            nou_n += n % 10 * p;
            p *= 10;
            nou_n += n % 10 * p;
            p *= 10;
        }
        else {
            nou_n += n % 10 * p;
            p *= 10;
        }
        n /= 10;
    }
    if (sw == true)
        d = nou_n;
    else
        d = -1;
}

int main()
{
    int n, d;
    cin >> n;
    duplicare(n, d);
    cout << d;
    return 0;
}
