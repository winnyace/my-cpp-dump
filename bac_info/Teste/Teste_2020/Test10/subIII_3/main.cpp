/*
Un șir format din cel puțin trei termeni formează o progresie aritmetică de rație r dacă diferența dintre
oricare termen al acestuia și cel aflat pe poziția consecutivă în șir este egală cu r.
Fișierul text bac.txt conține un șir de cel puțin trei și cel mult 10^6 numere întregi din intervalul
[-10^8,10^8]. Numerele sunt separate prin câte un spațiu. Se cere să se afișeze pe ecran rația unei
secvențe din șir cu număr maxim de termeni, secvență care formează o progresie aritmetică. Dacă
există mai multe astfel de secvențe de lungime maximă se afișează rația cea mai mare, iar dacă nu
există nicio astfel de secvență, se afișează pe ecran mesajul nu exista. Proiectați un algoritm eficient
din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fișierul conține numerele 4 9 14 19 18 16 8 5 3 1 -1 -3 -5 -7
pe ecran se afișează valoarea -2 (corespunzătoare secvenței 5 3 1 -1 -3 -5 -7)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/subIII_3/bac.txt");
    int num1, num2, l, l_max, r;
    f >> num1 >> num2;
    l = 2;
    r = num2 - num1;
    num1 = num2;
    while (f >> num2)
    {
        if (num2 == num1+r)
        {
            l++;
            num1 = num2;
        }
        else
        {
            num1 = num2;
            f >> num2;
            r = num2 - num1;
            num1 = num2;
            if (l_max < l)
                l_max = l;
            l = 2;
        }
    }
    cout << r;
}
