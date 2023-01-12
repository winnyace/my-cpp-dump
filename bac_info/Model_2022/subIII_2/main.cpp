// Un text are cel mult 100 de caractere și este format din cuvinte, numere naturale şi spaţii. Textul conține 
// cel puțin un număr, iar cuvintele sunt formate numai din litere mici ale alfabetului englez. Cuvintele şi 
// numerele sunt separate prin câte un spaţiu, ca în exemplu.  
// Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat  şi afişează  pe  ecran  un 
// număr natural k, dacă toate numerele care intră în componența sa au câte k cifre, sau mesajul NU, în caz 
// contrar.  
// Exemplu: pentru textul la zoo sunt 100 de cocori si 120 de pasari flamingo 
// sau pentru textul la zoo sunt 100 de cocori 
// se afişează 3 
// iar pentru textul la zoo sunt 100 de cocori si 10 pasari flamingo 
// se afişează NU

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char s[101], *cuv;
    int n, k = 0, curent_k;
    bool num_gasit = false, numar_contor_corect = true;
    cin.get(s, 101);

    cuv = strtok(s, " ");
    while (num_gasit != true)
    {
        if (cuv[0] >= '1' && cuv[0] <= '9')
        {
            num_gasit = true;
            n = atoi(cuv);
        }
        cuv = strtok(NULL, " ");
    }
    while (n != 0)
    {
        k++;
        n /= 10;
    }

    while (cuv != NULL && numar_contor_corect == true)
    {
        if (cuv[0] >= '1' && cuv[0] <= '9')
        {
            n = atoi(cuv);
            curent_k = 0;
            while (n != 0)
            {
                curent_k++;
                n /= 10;
            }
            if (curent_k != k)
                numar_contor_corect = false;
        }
        cuv = strtok(NULL, " ");
    }
    if (numar_contor_corect == true)
        cout << k;
    else
        cout << "nu";
    return 0;
}
