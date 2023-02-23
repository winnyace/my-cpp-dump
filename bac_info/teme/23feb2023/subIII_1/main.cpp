#include <iostream>
using namespace std;

void impare(int& n)
{
    int nou_n = 0, p = 1;
    while (n != 0)
    {
        if ((n % 10) % 2 != 0)
            nou_n += ((n % 10) - 1) * p;
        else
            nou_n += n % 10 * p;
        p *= 10;
        n /= 10;
    }
    n = nou_n;
}

int main()
{
    int n;
    cin >> n; 
    impare(n);
    cout << n;
    return 0;
}