// Fişierul bac.txt conține numere naturale din intervalul [2,10^6]: pe prima linie n, iar pe a doua linie
// un șir de n numere, separate prin câte un spațiu.
// Se cere să se afișeze pe ecran, pentru fiecare număr natural i (i e [1,n]), cea mai mare dintre primele
// i valori ale șirului aflat în fișier. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
// algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int i, n, max = 0;
    f >> n;
    for (int j = 1; j <= n; j++)
    {
        f >> i;
        if (i > max)
            max = i;
        cout << max << " ";
    }
    f.close();
    return 0;
}
