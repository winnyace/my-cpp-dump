// Fișierul text bac.txt conține numere naturale din intervalul [1,104]: pe prima linie un număr n, pe a
// doua linie un șir de n numere, iar pe fiecare dintre următoarele linii, până la finalul fișierului, câte o
// pereche de numere, reprezentând extremitățile unui interval închis. Numerele aflate pe aceeași linie a
// fișierului sunt în ordine crescătoare și sunt separate prin câte un spațiu.
// Se cere să se afișeze pe ecran numărul de intervale care nu conțin niciun termen al
// șirului aflat pe a doua linie a fișierului. Proiectați un algoritm eficient din punctul de
// vedere al timpului de executare.
// Exemplu: dacă fișierul conține numerele alăturate, se afișează pe ecran 3.
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat
// 5
// 4 8 9 16 25
// 1 3
// 2 5
// 9 15
// 5 7
// 20 100
// 10 12

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/Test17/subIII_3/bac.txt");
    int a, b, n, con = 0;
    f >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        f >> v[i];
    while (f >> a >> b)
    {
        if (b < v[0])
            con++;
        else if (b > v[0])
        {
            bool gasit = false;
            for (int i = 0; i < n && gasit == false; i++)
            {
                if (v[i] >= a && v[i] <= b)
                    gasit = true;
                else if (v[i] > b)
                    break;
            }
            if (gasit == false)
                con++;
        }
    }
    cout << con;
}
