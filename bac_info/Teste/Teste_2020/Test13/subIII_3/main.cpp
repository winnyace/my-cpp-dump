/*
Șirul de mai jos este definit astfel: f1=1, f2=2, fn=3∙fn-1-2∙fn-2 (unde n este un număr natural n≥3).
1, 2, 4, 8, 16, 32....
Se citește de la tastatură un număr natural x (x≤109), valoare a unui termen al șirului dat, şi se cere să
se scrie în fişierul text bac.txt, în ordine descrescătoare, separați prin câte un spațiu, toţi termenii
şirului care sunt mai mici sau egali cu x. Proiectați un algoritm eficient din punctul de vedere al
memoriei utilizate şi al timpului de executare.
Exemplu: dacă se citește numărul 16
fişierul bac.txt conţine numerele 16 8 4 2 1
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/Test13/subIII_3/bac.txt");
    int x;
    cin >> x;
    while (x != 0)
    {
        f << x << " ";
        x /= 2;
    }
    f.close();
    return 0;
}
