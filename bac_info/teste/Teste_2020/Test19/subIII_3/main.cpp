// Fișierul bac.txt conține, în ordine crescătoare, cel mult 10^6 numere naturale din intervalul [0,10^9],
// separate prin câte un spațiu. Se cere să se afișeze pe ecran, în ordine strict crescătoare, separate prin
// câte un spațiu, numerele pare distincte care apar în fișier. Dacă nu există niciun astfel de număr, se
// afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient din punctul de vedere al memoriei
// utilizate și al timpului de executare.
// Exemplu: dacă fișierul conține numerele 5 5 6 7 8 8 8 8 10 15 16 16 25 25 49
// pe ecran se afișează, în această ordine, numerele 6 8 10 16
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, ultima_val_para;
    while (f >> x)
    {
        if (x%2 == 0 && ultima_val_para != x)
        {
            cout << x << " ";
            ultima_val_para = x;
        }
    }
    f.close();
    return 0;
}