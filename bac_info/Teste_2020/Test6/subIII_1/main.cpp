// Subprogramul prodprim are doi parametri:
// • n, prin care primește un număr natural (n e [2,10^9]);
// • p, prin care furnizează produsul divizorilor primi ai lui n.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=2000, în urma apelului p=10, deoarece 2000=2^4*5^3. 

#include <iostream>
using namespace std;

void prodprim(int n, int& p)
{
    int d = 2, pu;
    p = 1;
    while (n > 1)
    {
        pu = 0;
        while (n%d == 0)
        {
            pu++;
            n /= d;
        }
        if (pu > 0)
            p *= d;
        d++;
    }
}

int main()
{
    int n, p;
    cin >> n;
    prodprim(n, p);
    cout << p;
}