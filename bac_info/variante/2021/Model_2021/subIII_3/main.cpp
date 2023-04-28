// Fișierul  cheltuieli.in  are  cel  mult  106  linii,  fiecare  linie  conținând  câte  trei  numere  naturale  din 
// intervalul  [1,102],  reprezentând,  în  această  ordine,  date  despre  câte  o  achiziție:  tipul  produsului 
// cumpărat,  numărul  de  produse  de  acest  tip  cumpărate,  respectiv  prețul  unui  astfel  de  produs  la  acel 
// moment. Numerele aflate pe aceeași linie sunt separate prin câte un spațiu. 
//   Se cere să se  afișeze pe  ecran cea mai mare sumă cheltuită pentru toate  produsele de 
// același tip, precum și numărul de tipuri de produse pentru care s-a obținut această sumă. 
// Proiectați un algoritm eficient din punctul de vedere al timpului de executare. 
// Exemplu: dacă fișierul cheltuieli.in are conținutul
// 4  1 10 
// 1 16  1 
// 4  2  8 
// 2  1  5 
// 1  5  2 
// se afișează pe ecran: 26 2  
// (s-a cheltuit suma maximă 26 pentru produsele de tipul 1 și 4: 26=16·1+5·2=1·10+2·8) 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("cheltuieli.in");
    int fr[100] = {0}, x, can, suma, k, suma_max = 0;
    while (f >> x)
    {
        f >> can >> suma;
        fr[x] += can * suma;
    }
    for (int i = 1; i < 100; i++)
        if (fr[i] != 0)
            if (suma_max < fr[i])
            {
                k = 1;
                suma_max = fr[i];
            }
            else if (suma_max == fr[i])
                k++;
    cout << suma_max << " " << k;
}