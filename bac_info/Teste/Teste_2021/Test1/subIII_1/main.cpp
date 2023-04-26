// Subprogramul divX are doi parametri, n și x, prin care primește câte un număr natural din intervalul
// [2,50]. Subprogramul afișează pe ecran, în ordine descrescătoare, separate prin câte un spațiu,
// primele n numere naturale nenule divizibile cu x.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=4 și x=15 în urma apelului se afișează numerele 60 45 30 15

#include <iostream>
using namespace std;

void divX(int n, int x)
{
    while (n != 0)
    {
        cout << x*n << " ";
        n--;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    divX(n, x);
    return 0;
}