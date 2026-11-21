// Două numere a și b sunt numite generatoare ale unui număr natural n dacă a∙b+[a/b]=n, unde s-a notat
// cu [c] partea întreagă a numărului real c.
// Subprogramul generatoare are un singur parametru, n, prin care primește un număr natural
// (n e [2,109]). Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea
// că sunt generatoare ale lui n și că primul număr din pereche este par. Numerele din fiecare pereche sunt
// separate prin simbolul minus (-), iar perechile sunt separate prin câte un spațiu. Dacă nu există astfel de
// perechi, se afișează pe ecran mesajul nu exista. Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=2020 se afișează pe ecran
// 2-1010 4-505 10-202 20-101 96-21 200-10 606-3 808-2 1010-1 

#include <iostream>
using namespace std;

void generatoare(int n)
{
    int a, b;
    for (a = 2; a <= n/2; a = a+2)
        for (b = n/2; b>= 1; b--)
            if (a*b + a/b == n)
                cout << a << "-" << b << endl;
}

int main()
{
    int n;
    cin >> n;
    generatoare(n);
    return 0;
}
