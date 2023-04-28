#include <iostream>
#include <cmath>
using namespace std;

int suma(int a, int b)
{
    int d, s = 1, limita;
    if (a > b)
        limita = a;
    else
        limita = b;
    for (d = 2; d < sqrt(limita); d++)
        if (a % d == 0 && b % d == 0)
            s += d;
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << suma(a, b);
}

