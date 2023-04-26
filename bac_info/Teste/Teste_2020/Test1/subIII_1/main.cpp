#include <iostream>
using namespace std;

/*
Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [2,10^9];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mare putere, p, în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mare dintre ei.
Scrieți definiția completă a subprogramului.
*/


void puture(int n, int &d, int &p)
{
    int k_p, k_d = 2;
    while (n > 1) {
        k_p = 0; 
        while (n % k_d == 0) {
            k_p++;
            n /= k_d;
        }
        if (k_p > p) {
            p = k_p;
            d = k_d;
        }
        else if (k_p == p)
            if (k_d > d)
                d = k_d;
        k_d++;
    }
}

int main()
{
    int n, d = 0, p = 0;
    cin >> n;
    puture(n, d, p);
    cout << d << " " << p;
}
