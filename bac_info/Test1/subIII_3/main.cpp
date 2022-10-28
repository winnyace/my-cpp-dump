// Se consideră șirul 1, 1, 2, 5, 13, 34, 89, 233, 610 ....
// definit astfel: f1=f2=1, fn=3∙fn-1-fn-2 (unde n este un număr natural n≥3):
// Se citesc de la tastatură două numere naturale x și y (x≤y≤10^9), valorile a doi termeni aflați pe poziții
// consecutive în şirul dat, şi se cere să se scrie în fişierul text bac.txt, în ordine descrescătoare,
// separați prin câte un spațiu, toţi termenii şirului care sunt mai mici sau egali cu y. Proiectați un algoritm
// eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
// Exemplu: dacă se citesc numerele 89 233
// fişierul bac.txt conţine numerele 233 89 34 13 5 2 1 1

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("bac.txt");
    int x, y, aux;
    cin >> x >> y;
    f << y << " " << x << " ";
    while (aux > 1) 
    {
        aux = 3 * x - y;
        f << aux << " ";
        y = x;
        x = aux;
    }
    f << 1;
    f.close();
}