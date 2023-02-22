// Subprogramul paritate are doi parametri:
// • n, prin care primește un număr natural (n e [1,10^9]);
// • nr prin care furnizează numărul de divizori naturali ai lui n cu aceeași paritate ca n.
// • Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=20, după apel nr=4 (divizorii lui 20 sunt 1, 2, 4, 5, 10, 20).

#include <iostream>
using namespace std;

void paritate(int n, int& nr)
{
    nr = 0;
    for (int d = 2; d <= n/2; d++)
        if (n%d == 0)
            nr++;
}

int main()
{
    int n, nr;
    cin >> n;
    paritate(n, nr);
    cout << nr;
}