// Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n e [2,10^9]).
// Subprogramul returnează suma divizorilor primi ai lui n. Scrieți definiția completă a subprogramului.
// Exemplu: pentru n=12 subprogramul returnează 5 (divizorii primi ai lui 12 sunt 2 și 3).

#include <iostream>
using namespace std;

int suma(int n)
{
    int d = 2, sum = 0, put;
    while (n > 1)
    {
        put = 0;
        while (n%d == 0)
        {
            put++;
            n /= d;
        }
        if (put > 0)
            sum += d;
        d++;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << suma(n);
}