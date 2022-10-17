#include <iostream>
#include <cmath>
using namespace std;

/*
Două numere distincte a și b sunt numite d-fii ai unui număr natural n dacă a∙b=n.
Subprogramul fii are un singur parametru, n, prin care primește un număr natural (n e [2,109]).
Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt d-fii ai
lui n. Fiecare pereche este afișată încadrată între paranteze rotunde, numerele din pereche fiind afișate în
ordine strict descrescătoare, separate printr-un spațiu. Scrieți definiția completă a subprogramului.
*/

void fii(int n)
{
    int i;
    for (i = 1; i < sqrt(n); i++) // merge si n/2, dar pt n = 12, de exemplu, afiseaza (4 3) si (3 4)
        if (n%i == 0)
            cout << "(" << n/i << " " << i << ") ";
}

int main()
{
    int n;
    cin >> n;
    fii(n);
}