#include <iostream>
using namespace std;

int suma(int n)
{
    int s = 1;
    for (int d = 4; d <= n; d++)
    {
        if (n % d == 0)
        {
            for (int x = 2; x <= d / 2; x++)
                if (d % x == 0)
                {
                    s += d;
                    break;
                }
        }
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << suma(n);
}
