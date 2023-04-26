// Se citesc de la tastatură două numere naturale din intervalul [1,81], p1  și p2, și se cere scrierea în 
// fișierul bac.out a tuturor numerelor naturale cu exact 7 cifre, pentru care produsul primelor două cifre 
// este egal cu p1, cele trei cifre din mijloc sunt egale între ele, iar produsul ultimelor două cifre este egal 
// cu p2. Numerele apar în fișier în ordine strict crescătoare, fiecare pe câte o linie. Proiectați un algoritm 
// eficient din punctul de vedere al memoriei utilizate și al timpului de executare. 
// Exemplu: dacă p1=12, iar p2=8, atunci 2633324 și 3400018 sunt două dintre cele 160 de numere cu 
// proprietatea cerută (2∙6=3∙4=12 și 2∙4=1∙8=8). 
// a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.) 
// b. Scrieți programul C/C++ corespunzător algoritmului proiectat. 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/Test15/subIII_3/bac.out");
    long x;
    int p1, p2;
    cin >> p1 >> p2;
    for (x = 1000000; x <= 9999999; x++)
    {
        if ( (x%10) * (x/10%10) == p2 && (x/100000%10) * (x/1000000%10) == p1 )
            if ( (x/100%10) == (x/1000%10) && (x/100%10) == (x/10000%10) && (x/1000%10) == (x/10000%10) )
                f << x << endl;
    }
    return 0;
}
