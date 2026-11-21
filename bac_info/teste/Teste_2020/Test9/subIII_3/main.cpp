/*
Numim k-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții consecutive
în șir, cu proprietatea că sunt divizibili cu numărul natural nenul k. Lungimea secvenței este egală cu
numărul de termeni ai săi.

Fișierul bac.txt conține numere naturale din intervalul [0,10^9]: pe prima linie un număr nenul k, iar
pe a doua linie un șir de cel mult 106 numere, separate prin câte un spațiu. Cel puțin un termen din șir
este divizibil cu k. Se cere să se afișeze pe ecran două valori, separate printr-un spațiu, reprezentând
lungimea maximă a unei k-secvențe din șirul aflat în fișier, respectiv numărul de astfel de secvențe.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.

Exemplu: dacă fișierul are conținutul de mai jos, se va afișa 4 2
5
2 10 5 20 21 0 10 60 15 3 9 20 20 5 45
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int num, con = 0, con_max = -1, div, con_rep = 1;
    bool verificat = false;
    f >> div;
    while (f >> num)
    {
        if (num%div == 0)
            con++;
        else
        {
            if (con_max == con)
                con_rep++;
            else if (con > con_max)
                con_max = con;
            con = 0;
        }
    }
    if (con_max == con)
        con_rep++;
    cout << con_max << " " << con_rep;
    f.close();
    return 0;
}
