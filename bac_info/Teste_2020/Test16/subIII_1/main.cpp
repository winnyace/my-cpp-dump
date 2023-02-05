// Subprogramul nrDivPrimi are un singur parametru, n, prin care primește  un  număr  natural 
// (n e [2,109]). Subprogramul returnează numărul divizorilor care, în descompunerea în factori primi a lui 
// n, apar la o putere impară. 
// Scrieți definiția completă a subprogramului. 
// Exemplu: dacă n=9000, subprogramul returnează 2 (9000=2^3 * 3^2 * 5^3).

#include <iostream>
using namespace std;

int nrDivPrimi(int n)
{
    int contor = 0, puture, div = 2;
    while (n > 1)
    {
        puture = 0;
        while (n%div == 0)
        {
            puture++;
            n /= div;
        }
        if (puture > 0 && puture%2 != 0)
            contor++;
        div++;
    }
    return contor;
}

int main()
{
    int n;
    cin >> n;
    cout << nrDivPrimi(n);
    return 0;
}
