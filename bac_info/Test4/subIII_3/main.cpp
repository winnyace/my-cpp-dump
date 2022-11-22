// Fişierul bac.txt conţine, în ordine descrescătoare, cel puţin două şi cel mult 10^6 numere naturale
// din intervalul [0,10^9], separate prin câte un spaţiu. Se cere să se afişeze pe ecran, în ordine strict
// descrescătoare, separate prin câte un spaţiu, numai numerele care apar în fişier de exact două ori.
// Dacă nu există niciun astfel de număr, se afișează pe ecran mesajul nu exista. Proiectați un algoritm
// eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
// Exemplu: dacă fişierul conţine numerele 100 50 50 50 49 49 36 16 16 12 10 10 9 7 7
// pe ecran se afişează, în această ordine, numerele 49 16 10 7

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, uc_x, con, uc_con;
    f >> x; con = 1; uc_x = x;
    while (f >> x)
    {
        if (x == uc_x)
            con++;
        else
        {
            if (con == 2)
                cout << uc_x << " ";
            con = 1;
            uc_x = x;
        }
    }
    if (con == 2)
        cout << uc_x << " ";
    f.close();
    return 0;
}
