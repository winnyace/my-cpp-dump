// Fișierul bac.in conține un șir de cel mult 10^6 numere întregi din intervalul [-10^9,10^9], separate prin
// câte un spațiu. Cel puțin un număr din șir este pozitiv.
// Se cere să se afișeze pe ecran lungimea maximă a unei secvențe a șirului care fie începe, fie se încheie
// cu un număr pozitiv. O secvență este formată din termeni aflați pe poziții consecutive în șir, iar lungimea
// secvenței este egală cu numărul de termeni ai acesteia. Proiectați un algoritm eficient din punctul de
// vedere al memoriei utilizate și al timpului de executare.
// Exemplu: dacă fișierul conține numerele -15 -7 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20
// pe ecran se afișează 11 (corespunzător secvenței 4 -7 21 -5 -200 -26 52 -24 -7 -9 -20)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, con = 0;
    bool primul_pozitiv_citit = false;
    while (f >> x)
    {
        if (x > 0 && primul_pozitiv_citit == false)
        {
            con = 1;
            primul_pozitiv_citit = true;
        }
        else if (primul_pozitiv_citit == true)
            con++;
    }
    cout << con;
}
