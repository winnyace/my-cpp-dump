// Un text are cel mult 100 de caractere și este format din cuvinte, numere naturale şi spaţii.
// Cuvintele sunt formate numai din litere mici ale alfabetului englez. Cuvintele şi numerele
// sunt separate prin câte un spaţiu, ca în exemplu.
// Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul menţionat mai sus şi
// afişează pe ecran numărul din text care începe cu cea mai mare cifră, ca în exemplu. Dacă
// există mai multe astfel de numere, se afișează doar unul dintre acestea, iar dacă textul nu
// conține niciun număr, se afișează pe ecran mesajul nu exista.
// Exemplu: pentru textul
// am 190 de nuci si 70 de castane
// se afişează
// 70

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char s[101], *cuv, max = '\0';
    int n;
    
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (cuv[0] >= '0' && cuv[0] <= '9')
            if (max < cuv[0])
            {
                n = atoi(cuv);
                max = cuv[0];
            }
        cuv = strtok(NULL, " ");
    }
    cout << n;
    return 0;
}
