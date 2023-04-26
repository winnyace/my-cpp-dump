// Subprogramul putere are doi parametri, n și p, prin care primește câte un număr natural (n e [2,109],
// p e [0,109]). Subprogramul returnează puterea la care apare numărul p în descompunerea în factori
// primi a lui n, dacă p este număr prim, sau valoarea -1 în caz contrar.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=80 și p=2, subprogramul returnează numărul 4 (80=2^4*5)

#include <iostream>
using namespace std;

int puture(int n, int p)
{
    int d = 2, pu;
    while (n > 1)
    {
        pu = 0;
        while (n%d == 0)
        {
            pu++;
            n /= d;
        }
        if (p == d && pu > 0)
            return pu;
        d++;
    }
    return -1;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << puture(n, p);
}