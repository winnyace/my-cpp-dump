/*
Fişierul bac.in conţine un şir de numere naturale distincte, din intervalul [1,10^9]. Numerele din şir
sunt separate prin câte un spaţiu şi cel puţin trei dintre ele au penultima cifră 2 și ultima cifră 0.
Se cere să se afișeze pe ecran cele mai mari trei numere din şir cu proprietatea că au penultima cifră 2
și ultima cifră 0. Numerele determinate sunt afişate în ordine crescătoare, separate prin câte un spaţiu.
Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul conţine numerele 9731 50 112 20 8 16 8520 3 2520 1520
pe ecran se vor afişa, în această ordine, numerele: 1520 2520 8520 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main()
{
    int x;
    ifstream f("bac.in");
    vector<int> v;
    
    if (f.good() == true)
        while (f >> x) {
            int pc = x/10 % 10, uc = x % 10;
            if (pc == 2 && uc == 0)
                v.push_back(x);
        }
    else
        cout << "nu";
    sort(v.begin(), v.end());
    for (auto i = v.end()-3; i != v.end(); ++i)
        cout << *i << " ";
    return 0;
}
