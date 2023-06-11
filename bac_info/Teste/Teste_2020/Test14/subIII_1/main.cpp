// Două numere a și b (a<b) sunt numite divizori pereche ai unui număr natural n dacă a∙b=n.
// Subprogramul perechi are un singur parametru, n, prin care primește un număr natural (n e [2,10^9]).
// Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu paritate diferită cu
// proprietatea că sunt divizori pereche ai lui n. Fiecare pereche este afișată încadrată între paranteze drepte,
// numerele din pereche fiind afișate în ordine strict crescătoare, separate printr-un spațiu, iar dacă nu există
// astfel de perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=12 se afișează pe ecran, nu neapărat în această ordine, [1 12][3 4]
// iar dacă n=9 se afișează pe ecran nu exista 

#include <iostream>
using namespace std;

void perechi(int n)
{
    int a = 1, b = 2;
    bool exista = false;
    if (n%2 == 0)
    {
        cout << "1" << " " << n << endl;
        exista = true;
    }
    while (a != n && b != n)
    {
        if (a*b == n)
        {
            cout << a << " " << b << endl;
            exista = true;
        }
        a += 2; b += 2;
    }
    if (exista == false)
        cout << "nu exista";
}

int main()
{
    int n;
    cin >> n;
    perechi(n);
    return 0;
}
