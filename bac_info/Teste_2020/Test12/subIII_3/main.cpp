// Șirul de mai jos este definit:
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 21, 42, 43, 86.... 
// fn {    n dacă n≤10
//         2∙fn-1 dacă n>10 și n impar
//         1 + fn-1 altfel
// }
// Se citește de la tastatură un număr natural x (x e [1,10^9]), termen al șirului dat, și se cere să se scrie
// în fișierul bac.out, separați prin câte un spațiu, în ordine strict descrescătoare, toți termenii șirului mai
// mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al memoriei utilizate și al
// timpului de executare.
// Exemplu: dacă valoarea citită de la tastatură este 43
// se scriu în fișier numerele 43 42 21 20 10 9 8 7 6 5 4 3 2 1

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("bac.txt");
    int num, x, y;
    cin >> num;
    f << num << " ";
    while (num != 1)
    {
        if (num%2 != 0)
        {
            num -= 1;
            f << num << " ";
        }
        else if (num <= 10)
        {
            num -= 1;
            f << num << " ";
        }
        else if (num%2 == 0)
        {
            num /= 2;
            f << num << " ";
        }
    }
    f.close();
    return 0;
}