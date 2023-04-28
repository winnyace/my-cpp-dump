#include <iostream>
using namespace std;

void Impare(int& n)
{
    int nou_n = 0, c, p = 1;
    while (n != 0)
    {
        c = n % 10;
        if (c % 2 == 0)
            nou_n = c * p + nou_n;
        else
            nou_n = (c-1) * p + nou_n;
        n /= 10;
        p *= 10;
    }
    n = nou_n;
}

int main()
{
    int n;
    cin >> n;
    Impare(n);
    cout << n;
}
