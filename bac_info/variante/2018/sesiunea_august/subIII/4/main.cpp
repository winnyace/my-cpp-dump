// Primii termeni ai șirului definit alăturat
// (unde n este un număr natural nenul)
// sunt:
// 0, 3, 8, 15, 24, 35, 48, 63, 80 ....
// fn= 
// 0 dacă n====1
// 3 dacă n====2
// 2∙∙∙∙fn-1-fn-2++++2 altfel
// Se citesc de la tastatură două numere naturale din intervalul [0,109], x și y,
// reprezentând valorile a doi termeni aflați pe poziții consecutive în şirul dat (x<y), şi se
// cere să se scrie în fişierul text bac.txt, în ordine strict descrescătoare, separați prin câte
// un spațiu, toţi termenii şirului mai mici sau egali cu y.
// Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei
// utilizate.
// Exemplu: dacă se citesc numerele
// 48 63
// fişierul bac.txt conţine numerele
// 63 48 35 24 15 8 3 0
// a) Descrieţi în limbaj natural algoritmul proiectat, justificând eficienţa acestuia. (2p.)
// b) Scrieţi programul C/C++ corespunzător algoritmului proiectat. (8p.)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("bac.txt");
    int x, y, n;
    do {
        cin >> x >> y;
    } while (!(x < y));
    f << y << " " << x << " ";
    n = 2 * x + 2 - y;
    f << n << " ";
    y = x; x = n;
    while (n != 8)
    {
        n = 2 * x + 2 - y;
        f << n << " ";
        y = x; x = n;
    }
    f << 3 << " " << 0;
}
