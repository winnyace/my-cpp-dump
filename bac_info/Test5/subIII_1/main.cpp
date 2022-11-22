// Un număr este scris în baza de numerație b (b≤10) dacă cifrele sale aparțin intervalului [0,b-1].
// Subprogramul baza are un singur parametru, n, prin care primește un număr natural (n e [0,10^9]).
// Subprogramul returnează cea mai mică bază din intervalul [2,10] căreia i-ar putea corespunde
// scrierea lui n. Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=50731, subprogramul returnează numărul 8. 

#include <iostream>
using namespace std;

int baza(int b)
{
    int max = 0;
    while (b != 0)
    {
        if (max < b%10)
            max = b%10;
        b /= 10;
    }
    return max+1;
}

int main()
{
    int b;
    cin >> b;
    cout << baza(b);
    return 0;
}