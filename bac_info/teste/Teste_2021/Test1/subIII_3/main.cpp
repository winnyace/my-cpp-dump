// Fișierul bac.in conține cel mult 10^6 numere naturale din intervalul [0,10^9], separate prin câte un
// spațiu. Se cere să se afișeze pe ecran, în ordine descrescătoare, cele mai mari două numere de două
// cifre distincte care NU se află în fișier. Numerele afișate sunt separate printr-un spațiu, iar dacă nu
// există două astfel de numere, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
// din punctul de vedere al timpului de executare.
// Exemplu: dacă fișierul bac.in conține numerele 12 235 123 67 98 6 96 94 123 67 98 100
// se afișează pe ecran, în această ordine, numerele 97 95.
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat. (8p.)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, frec[100] = {0}, valorile = 0;
    while (f >> x)
    {
        if (x / 100 == 0)
            frec[x]++;
    }
    for (int i = 99; i >= 10 && valorile < 2; i--)
        if (frec[i] == 0 && i % 10 != i/10 % 10)
        {
            cout << i << " ";
            valorile++;
        }
    return 0;
}