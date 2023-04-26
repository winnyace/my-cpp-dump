/*
Subprogramul patrate are doi parametri, x și y, prin care primește câte un număr natural
(1≤x≤y≤10^9). Subprogramul afişează pe ecran o expresie aritmetică reprezentând suma numerelor din
intervalul [x,y] care au proprietatea că sunt pătrate perfecte, urmate de valoarea acestei sume.
Termenii sumei sunt într-o ordine oarecare și sunt separați prin câte un simbol plus (+), iar valoarea
sumei este precedată de simbolul egal (=), ca în exemplu. Dacă nu există niciun astfel de termen, se
afișează pe ecran mesajul nu exista.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=10 și y=50 se poate afișa pe ecran 16+25+36+49=126
*/

#include <iostream>
using namespace std;

void patrate(int x, int y)
{
    int p = 2, s = 0;
    while (p*p <= x)
    {
        p++;
    }
    while (p*p >= x && p*p <= y)
    {
        s += p*p;
        p++;
        if (p*p > y)
            cout << (p-1)*(p-1);
        else
            cout << (p-1)*(p-1) << "+";
    }
    cout << "=" << s;
}

int main()
{
    int x, y;
    cin >> x >> y;
    patrate(x, y);
    return 0;
}
