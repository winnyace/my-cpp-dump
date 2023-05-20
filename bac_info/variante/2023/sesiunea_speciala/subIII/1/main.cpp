#include <cmath>
#include <iostream>
using namespace std;

void puture(int n, int& x, int& p)
{
    x = 2;
    p = 1;
    while (true) {
        if (pow(x, p) == n)
            break;
        else
            if (pow(x, p) > n) {
                x++;
                p = 1;
            }
            else {
                p++;
            }
    }
}

int main()
{
    int n, x, p;
    cin >> n;
    puture(n, x, p);
    cout << x << " " << p;
    return 0;
}
