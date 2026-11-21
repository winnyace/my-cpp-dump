// Într-un tablou bidimensional, cu elemente având valori numai în mulţimea {0,1}, numim coloane
// „complementare” două coloane cu proprietatea că oricare două elemente ale acestora, aflate pe
// aceeaşi linie, sunt diferite.
// Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din
// intervalul [2,20], m şi n, şi elementele unui tablou bidimensional cu m linii şi n
// coloane, numere naturale din mulţimea {0,1}. Programul afişează pe ecran numărul
// de coloane ale tabloului care sunt „complementare" cu prima coloană a acestuia.

#include <iostream>
using namespace std;

// NU MERGE

int main()
{
    int n, m, a[21][21], con = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            do
            {
                cout << "dati val pentru matrice (0 sau 1): a[" << i << "][" << j <<"] = "; cin >> a[i][j];
            } while ( !(a[i][j] >= 0 && a[i][j] <= 1) );
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++)
    {
        bool econ = true;
        for (int i = 0; i < m && econ == true; i++)
            if (a[i][j] != a[i][0])
                econ = false;
        if (econ == true)
            con++;
    }
    cout << con;
}