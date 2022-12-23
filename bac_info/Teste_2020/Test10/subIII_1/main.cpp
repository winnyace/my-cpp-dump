// Subprogramul produs are doi parametri:
// • n, prin care primește un număr natural (n e [0,10^9]);
// • p, prin care furnizează produsul cifrelor pare distincte din scrierea acestuia, sau -1 dacă nu există
// astfel de cifre.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=1622325, după apel p=12 (12=6∙2), iar dacă n=122325, după apel p=2. 

#include <iostream>
using namespace std;

void produs(int n, int& p)
{
    int v_fr[10] = {0};
    while (n != 0)
    {
        v_fr[n%10]++;
        n /= 10;
    }
    for (int i = 2; i < 10; i = i+2)
        if (v_fr[i] > 0)
            p *= i;
}

int main()
{
    int n, p = 1;
    cin >> n;
    produs(n, p);
    cout << p;
}