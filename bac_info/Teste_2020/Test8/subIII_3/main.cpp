/* Fișierul bac.in conține un șir de cel mult 106 numere naturale din intervalul [0,109], separate prin
câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
număr maxim de valori care au cifra unităților egală cu cifra unităților lor. Numerele afișate sunt separate
prin câte un spațiu. Proiectați un algoritm eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fișierul bac.in conține numerele 112 12 5 25 88 15 2 19 32 179 35 621
pe ecran se afișează numerele de mai jos (termenii 32, respectiv 35 respectă proprietatea cerută):
9 11 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Test8/subIII_3/bac.in");
                //^ neovim fiind stupid, dar ma rog...
    int x, i, k = 0, n_max, fr[10] = {0}, fr_poz[10] = {0};

    if (f.good() == true) // neovim fiind stupid partea a doua, acum si in 3d.
    {
        while (f >> x)
        {
            k++;
            i = x%10; 
            fr[i]++;
            fr_poz[i] = k;
        }
        n_max = fr[0];
        for (i = 1; i < 10; i++)
            if (fr[i] > n_max)
                n_max = fr[i];
        for (i = 0; i < 10; i++)
            if (fr[i] == n_max)
                cout << fr_poz[i] << " ";
    }
    else
        cout << "fisier-ul nu a fost deschis";
    return 0;
}
