// Fișierul bac.txt conține un șir de cel mult 106 numere întregi din intervalul [-103,103], separate prin
// câte un spațiu. Se cere să se afișeze pe ecran suma maximă obținută adunând numere de pe poziții
// consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
// utilizate și al timpului de executare.
// Exemplu: dacă fișierul bac.txt conține valorile 4 -6 7 2 -1 4 -10 -3 9 2 -2
// se afișează pe ecran numărul 12

#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    ifstream f("bac.txt");
    int x, suma = 0, max_sum;
    while (f >> x)
    {
        if (suma == 0)
            suma += x;
        else if (x < 0 && x*-1 > suma || x*-1 > suma-3)
        {
            max_sum = suma;
            suma = 0;
        }
        else if (x < 0 && x*-1 < suma || x*-1 < suma-3)
            suma += x;
    }
    cout << max_sum;
}