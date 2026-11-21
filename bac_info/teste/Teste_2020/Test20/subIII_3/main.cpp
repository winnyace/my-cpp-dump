// Fișierul bac.txt conține un șir de cel mult 10^6 numere naturale din intervalul [0,10^3], separate prin
// câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere cu aceeași
// paritate, aflate pe poziții consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de
// vedere al memoriei utilizate și al timpului de executare.
// Exemplu: dacă fișierul bac.txt conține valorile 10 115 1 5 2 2 2 4 7 3 100 20 2 7
// se afișează pe ecran numărul 122
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat. (8p.)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, ultima_suma_maxima = INT32_MIN, suma_curenta = 0, ultimul_x = -1;
    while (f >> x)
    {
        if (suma_curenta == 0 && ultimul_x == -1)
        {
            ultimul_x = x;
            suma_curenta += x;
        }
        else if (x % 2 == ultimul_x % 2)
        {
            ultimul_x = x;
            suma_curenta += x;
        }
        else if (x % 2 != ultimul_x % 2)
        {
            if (ultima_suma_maxima < suma_curenta)
                ultima_suma_maxima = suma_curenta;
            suma_curenta = 0;
            suma_curenta += x;
            ultimul_x = x;
        }
    }
    cout << ultima_suma_maxima;
    return 0;
}