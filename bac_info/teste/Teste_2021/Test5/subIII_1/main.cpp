// Subprogramul identice are un singur parametru, n, prin care primește un număr natural (n e [10,10^9]).
// Subprogramul returnează valoarea 1, dacă numărul n are toate cifrele egale, sau valoarea 0 în caz contrar.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=2222, subprogramul returnează valoarea 1, iar dacă n=212, subprogramul
// returnează valoarea 0. 

#include <iostream>
using namespace std;

int identice(int n)
{
    int ultima_cifra = n%10;
    bool sw = true;
    n /= 10;
    while (n != 0 && sw == true)
    {
        if (n%10 != ultima_cifra)
        {
            sw = false;
            break;
        }
        n /= 10;
    }
    if (sw)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << identice(n);
}
