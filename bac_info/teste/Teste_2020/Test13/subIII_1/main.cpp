// Subprogramul putere are trei parametri:
// • n, prin care primește un număr natural din intervalul [2,10^9];
// • d și p, prin care furnizează divizorul prim, d, care apare la cea mai mică putere, p, în descompunerea în
// factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mic dintre ei.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=10780, atunci, în urma apelului, d=5 şi p=1 (10780=2^2*5*7^2*11). 

#include <iostream>
using namespace std;

void puture(int n, int &d, int &p)
{
    d = 2;
    while (n > 1)
    {
        p = 0;
        while (n%d == 0)
        {
            p++;
            n /= d;
        }
        if (p == 1)
            break;
        d++;
    }
}

int main()
{
    int n, d, p;
    cin >> n;
    puture(n, d, p);
    cout << d << "^" << p;
    return 0;
}
