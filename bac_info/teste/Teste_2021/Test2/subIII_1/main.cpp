// Subprogramul factori are doi parametri, n și m, prin care primește câte un număr natural din intervalul
// [1,10^9]. Subprogramul returnează numărul valorilor prime care apar la aceeași putere atât în
// descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=16500 și m=10780, atunci subprogramul returnează 2 (16500=2^2 * 3 * 5^3 * 11,
// 10780=2^2 * 5 * 7^ 2 * 11

#include <iostream>
using namespace std;

int factori(int n, int m)
{
    int con = 0, p_n, p_m, d = 2;
    while (n > 9 && m > 9)
    {
        p_n = 0; p_m = 0;
        while (n % d == 0)
        {
            p_n++;
            n /= d;
        }
        while (m % d == 0)
        {
            p_m++;
            m /= d;
        }
        if (p_n == p_m && p_n > 0)
            con++;
        d++;
    }
    return con;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << factori(n, m);
}
