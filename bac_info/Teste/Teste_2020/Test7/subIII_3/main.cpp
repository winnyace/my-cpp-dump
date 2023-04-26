// Fișierul bac.txt conține un șir de cel mult 10^6 numere întregi din intervalul [-10^3,10^3], separate prin
// câte un spațiu. Se cere să se afișeze pe ecran suma minimă obținută adunând numere de pe poziții
// consecutive în șirul aflat în fișier. Proiectați un algoritm eficient din punctul de vedere al memoriei
// utilizate și al timpului de executare.
// Exemplu: dacă fișierul bac.txt conține valorile -4 6 -7(*) -2(*) 1(*) -4(*) 10 3 -9 -2 2
// se afișează pe ecran numărul -12

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, suma = 0, min_suma; 
    while (f >> x)
    {
        if (x < 0)
            suma += x;
        else if (x > 0 && suma+x > -3 && suma < 0)
        {
            min_suma = suma;
            suma = 0;
        }  
        else if (x > 0 && suma+x < -3 && suma < 0)
            suma += x;
        else
            suma = 0;
    }
    cout << min_suma;
}