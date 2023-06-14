#include <iostream>
using namespace std;

int armonie(int x, int y)
{
    int a = 1, b = 1, xc = x, yc = y, n = x+y;
    for (int d = 2; d <= x; d++)
        if (x % d == 0)
            a += d;
    for (int d = 2; d <= y; d++)
        if (y % d == 0)
            b += d;
    if (n > a && n < b)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << armonie(x, y);
    return 0;
}
