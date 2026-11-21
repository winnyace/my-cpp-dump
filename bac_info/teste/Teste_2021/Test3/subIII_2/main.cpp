// O sală de spectacole are mai multe rânduri de scaune, toate rândurile având același număr de locuri. O
// persoană poate rezerva mai multe locuri, dar cel mult câte unul pe un rând. Configurația sălii este
// memorată ca un tablou bidimensional, în care prima coloană corespunde primului rând de scaune, iar
// ultima coloană corespunde ultimului rând de scaune. Locurile libere sunt notate cu 0, iar cele rezervate
// sunt notate cu numere naturale nenule, astfel încât toate locurile rezervate de o persoană sunt notate
// cu același număr, iar cele rezervate de persoane distincte sunt notate cu numere distincte.
// Scrieți un program C/C++ care citește de la tastatură numerele naturale din intervalul [2,20], m și n, apoi m∙n
// numere naturale din intervalul [0,400], elemente ale tabloului bidimensional cu m linii și n coloane,
// reprezentând configurația sălii. Programul verifică dacă există persoane care au rezervat locuri atât pe primul,
// cât și pe ultimul rând al sălii, și afișează pe ecran numerele cu care sunt notate aceste locuri, ca în exemplu.
// Numerele sunt afișate într-o ordine oarecare, separate prin câte un spațiu, iar dacă nu există
// astfel de locuri se afișează pe ecran mesajul nu exista.
// Exemplu: pentru m=5, n=4 și tabloul alăturat se afișează pe ecran, nu neapărat în această
// ordine, numerele 6 8
// 3 7 0 0
// 0 0 5 8
// 6 2 0 1
// 0 3 0 6
// 8 0 6 4

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[20][20] = {0}, n, m, i, j;
    bool sw = false;
    ifstream f("date");
    f >> m >> n;
    // do {
    //     cout << "dati n, m (n, m se alfa intre 2 si 20 inclusiv): "; cin >> n >> m;
    // } while (!(n >= 2 && n <= 20 && m >= 2 && m <= 20));
    
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            f >> a[i][j];
            // do {
            //     cout << "dati un numar intre 0 si 400, inclusiv: "; cin >> a[i][j];
            // } while (!(a[i][j] >= 0 && a[i][j] <= 400));

    for (i = 0; i < m; i++)
    {
        int persoana = a[i][0];
        sw = false;
        if (persoana != 0)
        {
            for (int j = 0; j < m && sw == false; j++)
                if (persoana == a[j][n-1])
                    sw = true;
            if (sw == true)
                cout << persoana << " ";
        }
    }
    if (sw == false)
        cout << "nu exista";
    return 0;
}
