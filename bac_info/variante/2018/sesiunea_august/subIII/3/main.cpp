// Subprogramul interval are un singur parametru, n, prin care primeşte un număr natural
// (n ∈ [3,10^6]). Subprogramul returnează cel mai mic număr natural x (n<x) care NU este
// prim, cu proprietatea că în intervalul [n,x] există un singur număr prim.
// Scrieţi definiţia completă a subprogramului.
// Exemplu: dacă n=8, subprogramul returnează numărul 12.

#include <iostream>
using namespace std;

int interval(int n)
{
    int x = n+1, d;
    bool eprim;
    while (true) {
        eprim = true;
        for (d = 2; d < x/2 && eprim == true; d++)
            if (x % d == 0)
                eprim = false;
        if (eprim == true) {
            x++;
            for (d = 2; d < x/2 && eprim == true; d++)
                if (x % d == 0)
                    eprim = false;
            if (eprim == false)
                return x;
            else
                x++;
        }
        else
            x++;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << interval(n);
    return 0;
}
