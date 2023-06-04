// Un număr natural este numit echilibrat dacă suma cifrelor sale de pe poziții pare este un
// număr par, iar suma cifrelor sale de pe poziţii impare este un număr impar. Pozițiile cifrelor
// sunt numerotate de la dreapta la stânga, astfel: cifra unităților este pe poziția 0, cifra zecilor
// este pe poziția 1 ș.a.m.d.
// Subprogramul echilibrat are un singur parametru, n, prin care primeşte un număr
// natural (n ∈ [10,10^9]). Subprogramul returnează valoarea 1 dacă n este echilibrat sau
// valoarea 0 în caz contrar.
// Scrieţi definiţia completă a subprogramului.
// Exemplu: dacă n=25163912, subprogramul returnează valoarea 1, iar dacă n=11211,
// subprogramul returnează valoarea 0.

#include <iostream>
using namespace std;

int echilibrat(int n)
{
    int suma_pare = 0, suma_impare = 0, k = 0;
    while (n != 0)
    {
        if (k % 2 == 0)
            suma_pare += n % 10;
        else
            suma_impare += n % 10;
        k++;
        n /= 10;
    }
    if (suma_pare == suma_impare)
        return 1;
    else
        return 0;;
}

int main()
{
    int n;
    cin >> n;
    cout << echilibrat(n);
    return 0;
}
