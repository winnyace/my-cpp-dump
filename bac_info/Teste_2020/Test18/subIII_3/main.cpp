// Numim 10-secvență într-un șir de numere naturale, o succesiune de termeni aflați pe poziții
// consecutive în șir, cu proprietatea că sunt multipli ai numărului 10. Lungimea secvenței este egală cu
// numărul de termeni ai săi.
// Fișierul bac.txt conține un șir de cel mult 10^6 numere naturale din intervalul [0,10^9], separate prin
// câte un spațiu. Cel puțin un termen din șir este multiplu al lui 10. Se cere să se afișeze pe ecran două
// valori, separate printr-un spațiu, reprezentând lungimea maximă a unei 10-secvențe din șirul aflat în
// fișier, respectiv numărul de 10-secvențe cu o astfel de lungime. Proiectați un algoritm eficient din
// punctul de vedere al memoriei utilizate și al timpului de executare.
// Exemplu: dacă fișierul are conținutul
// alăturat, se afișează 3 2
// 7 3 200 100 10 9 6 100 1000 40 1002 20 30

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/Test18/subIII_3/bac.txt");
    int x, contor_curent = 0, contor_maxim_1 = 0, contor_maxim_2 = 0;
    while (f >> x)
    {
        if (x%10 == 0)
            contor_curent++;
        else
        {
            if (contor_curent > contor_maxim_1)
                contor_maxim_1 = contor_curent;
            else if (contor_curent > contor_maxim_2 && contor_curent < contor_maxim_1)
                contor_maxim_2 = contor_curent;
           contor_curent = 0;
        }
    }
    if (contor_curent > contor_maxim_2 && contor_curent < contor_maxim_1)
        contor_maxim_2 = contor_curent;
    cout << contor_maxim_1 << " " << contor_maxim_2;
    f.close();
    return 0;
}
