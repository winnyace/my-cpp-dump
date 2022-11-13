/*
Pe prima linie a fişierului numere.txt sunt memorate cel mult 90 de numere naturale, mai
mici decât 1000 fiecare, separate prin câte un spaţiu. Se cere să se determine, apelând
subprogramul interval definit la punctul anterior, numărul de elemente din fişier care sunt
mai mici sau egale cu ultimul număr din fişier. Numărul determinat se afişează pe ecran.
Exemplu: dacă fişierul numere.txt conţine, în această ordine, numerele 6 267 13 45 628 7 79 101 se va afişa 6. */ 

#include <iostream>
#include <fstream>
using namespace std;

int interval(int v[], int n)
{
    int i, a, b, con = 0;
    if (v[0] > v[n-1])
    {
        a = v[n-1];
        b = v[0];
    }
    else
    {
        a = v[0];
        b = v[n-1];
    }
    for (i = 0; i < n; i++)
        if (v[i] >= a && v[i] <= b)
            con++;
    return con;
}

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/teme/13nov2022/bac2008_v17_4/numere.txt");
    int x, v[90], i = 0, nr_ele = 0;
    if (f.good() == true)
        while (f >> x) 
        {
            nr_ele++;
            v[i] = x;
            i++;
        }
    cout << interval(v, nr_ele);
}
