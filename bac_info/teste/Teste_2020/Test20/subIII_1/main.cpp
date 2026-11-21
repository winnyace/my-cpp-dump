// Subprogramul transformareBaza10 are doi parametri, b și n, prin care primește câte un număr
// natural (b e [2,10], n e [0,10^9]). Subprogramul returnează suma tuturor produselor de forma c∙bk,
// unde c este cifra de pe poziția k în scrierea numărului n; pozițiile sunt numerotate de la dreapta la
// stânga, iar cifra unităților este pe poziția 0.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă b=2 și n=10010, subprogramul returnează 18 (18=1∙24+0∙23+0∙22+1∙21+0∙20).

#include <iostream>
#include <cmath>
using namespace std;

int transformareBaza10(int b, int n)
{
    int num = 0, pos = 0, nc = n;
    while (n != 0)
    {
        pos++;
        n /= 10;
    }
    while (nc != 0)
    {
        num = num + nc%10 * pow(b, pos);
        nc /= 10;
        pos--;
    }
    return num;
}
int main()
{
    int b, n;
    cin >> n >> b;
    cout << transformareBaza10(b, n);
}