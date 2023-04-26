/*
Subprogramul pDoi are un singur parametru, n, prin care primește un număr natural (n e [1,10^9]).
Subprogramul returnează cea mai mare valoare din intervalul [1,n], cu proprietatea că este o putere a
lui 2.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=20, subprogramul returnează 16
*/

#include <iostream>
#include <cmath>
using namespace std;

int pDoi(int n)
{
    int p = 1;
    while (pow(2, p) <= n)
        p++;
    return pow(2, p-1);
}

int main()
{
    int n;
    cin >> n;
    cout << pDoi(n);
}
