/*
Subprogramul suma are doi parametri:
• n, prin care primește un număr natural din intervalul [0,10^9];
• s, prin care furnizează suma cifrelor impare distincte din scrierea acestuia.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=4713835, după apel s=16 (16=7+1+3+5), iar dacă n=48, după apel s=0.
*/

#include <iostream>
using namespace std;

void suma(int n, int& s)
{
    int c_fr[10] = {0};
    while (n != 0)
    {
        c_fr[n%10]++;
        n /= 10;
    }
    for (int i = 1; i <= 10; i = i + 2)
        if (c_fr[i] > 0)
            s += i;
}

int main()
{
    int n, s = 0;
    cin >> n;
    suma(n, s);
    cout << s;
    return 0;
}
