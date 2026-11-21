// Două numere naturale sunt numite z-prietene dacă au aceeași cifră a zecilor.
// Fișierul bac.in conține un șir de cel mult 10^6 numere naturale din intervalul [10,10^9], separate prin
// câte un spațiu. Se cere să se afișeze pe ecran pozițiile din șir pe care se află termeni precedați de un
// număr maxim de valori z-prietene cu ei. Numerele afișate sunt separate prin câte un spațiu. Proiectați
// un algoritm eficient din punctul de vedere al timpului de executare.
// Exemplu: dacă fișierul conține numerele 726 358 98 157 20 49 128 879 659 271
// pe ecran se afișează numerele 7 9 (termenii 128, respectiv 659 respectă proprietatea cerută).

#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in"); 
    int x, vector_frec_zeci[10] = {0}, max = 0;
    while (f >> x)
    {
        int c = x / 10 % 10;
        vector_frec_zeci[c]++;
    }
    for (int i = 1; i < 10; i++)
        if (vector_frec_zeci[i] > max)
            max = vector_frec_zeci[i];
    for (int i = 1; i < 10; i++)
        if (vector_frec_zeci[i] == max)
            cout << i << " ";
    f.close();
    return 0;
}
