// Fișierul bac.in conține un șir de numere naturale distincte, din intervalul [1,10^9]. Numerele din șir
// sunt separate prin câte un spațiu și cel puțin trei dintre ele au penultima cifră 2 și ultima cifră 0.
// Se cere să se afișeze pe ecran cele mai mici trei numere din șir cu proprietatea că au penultima cifră 2
// și ultima cifră 0. Numerele determinate sunt afișate în ordine crescătoare, separate prin câte un spațiu.
// Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
// Exemplu: dacă fișierul conține numerele 9731 50 112 20 8 16 8520 3 2520 1520
// pe ecran se vor afișa, în această ordine, numerele: 20 1520 2520
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat.

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int num, max = INT_MIN, ultimul_num = -1;
    while (f >> num)
    {
        if (num%100 == 20)
        {
            if (num > max)
                max = num;
            else
            {
                
            }
        }
    }
    f.close();
    return 0;
}