// Subprogramul suma are doi parametri:
// • n, prin care primește un număr natural din intervalul [0,10^9];
// • s, prin care furnizează suma cifrelor pare distincte din scrierea acestuia.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=67638825, după apel s=16 (16=6+8+2), iar dacă n=15, după apel s=0. 

#include <iostream>
using namespace std;

void suma(int n, int& s)
{
    int fr[10] = {0};
    while (n != 0)
    {
        fr[n%10]++;
        n /= 10;
    }
    s = 0;
    for (int i = 0; i < 10; i = i + 2)
        if (fr[i] > 0)
            s += i;
}

int main()
{
    int n, s;
    cin >> n;
    suma(n, s);
    cout << s;
    return 0;
}