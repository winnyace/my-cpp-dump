/* Subprogramul aranjare are 2 parametri prin care primeşte un tablou unidimensional cu
maximum 100 de numere reale şi numărul de elemente din tabloul unidimensional.
Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate valorile
negative să se afle pe primele poziţii, iar valorile pozitive în continuarea celor negative.
Ordinea în cadrul secvenţei de elemente pozitive, respectiv în cadrul secvenţei de elemente
negative, poate fi oricare.
Exemplu: dacă este transmis ca parametru un tablou unidimensional cu 6 elemente de forma
(12, -7.5, 6.5, -3, -8, 7.5), după apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5) */

#include <iostream>
using namespace std;

void aranjare(float v[], int n)
{
    int i, con;
    for (i = 0; i < n; i++)
    {
        float aux;
        con = 0;
        if (v[i] < 0)
        {
            for (int j = i-1; j >= 0; j--)
                if (v[j] > 0)
                    con++;
                else
                    break;
            aux = v[i-con];
            v[i-con] = v[i];
            v[i] = aux;
        }
    }
}

int main()
{
    float v[100]; int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " "; cin >> v[i];
    }
    cout << endl; aranjare(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
