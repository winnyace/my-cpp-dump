/* În fişierul text nr1.txt sunt memorate pe prima linie două valori, n şi m, de cel mult 2 cifre
fiecare, separate prin spaţiu, iar pe fiecare dintre următoarele n linii sunt memorate câte m
numere reale, separate prin câte un spaţiu. Se cere scrierea în fişierul text nr2.txt a
numerelor de pe fiecare dintre cele n linii ale fişierului nr1.txt, numerele de pe fiecare linie
fiind aranjate astfel încât valorile pozitive să se afle la început şi cele negative la sfârşit.
Ordinea în cadrul secvenţei de valori pozitive, respectiv în cadrul secvenţei de valori
negative, poate fi oricare. Cele m numere de pe o linie a fişierului nr1.txt se vor afişa pe
câte o linie a fişierului nr2.txt, separate prin câte un spaţiu. Se vor folosi apeluri utile ale
subprogramului aranjare, definit la punctul anterior. */

#include <iostream>
#include <fstream>
using namespace std;

void aranjare(int v[], int n)
{
    int i, con_poz;
    for (i = 0; i < n; i++)
    {
        float aux;
        con_poz = 0;
        if (v[i] < 0)
        {
            for (int j = i; j < n; j++)
                if (v[j] < 0)
                    con_poz++;
                else
                    break;
            aux = v[i+con_poz];
            v[i+con_poz] = v[i];
            v[i] = aux;
            n--;
        }
    }
}

int main()
{
    ifstream f_i("/home/ion/Documents/Projects/C++_dump/bac_info/teme/13nov2022/bac2008_v19_4/nr1.txt");
    ofstream f_o("/home/ion/Documents/Projects/C++_dump/bac_info/teme/13nov2022/bac2008_v19_4/nr2.txt");
    int n, m, x, v[100];
    if (f_i.good() == true)
    {
        f_i >> n >> m;
        int op_con = 0;
        while (op_con != n)
        {
            for (int i = 0; i < m; i++)
            {
                f_i >> x;
                v[i] = x;
            }
            aranjare(v, m);
            for (int i = 0; i < m; i++)
                f_o << v[i] << " ";
            f_o << endl;
            op_con++;
        }
    }
    cout << "gata. verifica fisierul nr2.txt";
    return 0;
}
