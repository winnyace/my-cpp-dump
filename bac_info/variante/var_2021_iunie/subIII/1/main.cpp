#include <iostream>
using namespace std;

void divPrim(int n, int& s)
{
    s = 0;
    int d = 2, p;
    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p > 0)
            if (p % 2 != 0)
                s += d;
        d++;
    }
}

int main()
{
    int n, s;
    cin >> n;
    divPrim(n, s);
    cout << s;
}

