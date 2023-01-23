// Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate numai din litere mici ale alfabetului 
// englez și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un număr 
// natural n (n ∈ [1,10^2]), apoi un text de tipul precizat mai sus, și afișează pe ecran cuvintele acestuia, pe 
// rânduri separate, astfel încât primele poziții să fie ocupate de mulțimea formată de cele care au cel puțin n 
// litere, iar următoarele poziții, în continuarea acestora, să fie ocupate de mulțimea celorlalte cuvinte. 
// Cuvintele din aceeași mulțime sunt afișate într-o ordine oarecare, iar dacă una dintre 
// cele două mulțimi este vidă, se afișează pe ecran doar mesajul nu exista. 
// Exemplu: pentru n=5 și textul el mergea tot spre aleea pietruita, vom avea afișat:
// mergea 
// aleea 
// pietruita 
// el 
// tot 
// spre 

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, s_copie[101];
    int n;
    cout << "sir: "; cin.get(s, 101); 
    cout << "n:"; cin >> n;
    
    strcpy(s_copie, s);
    cuv = strtok(s_copie,  " ");
    while (cuv != NULL)
    {
        if (strlen(cuv) >= n)
            cout << cuv << endl;
        cuv = strtok(NULL, " ");
    }
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (strlen(cuv) < n)
            cout << cuv << endl;
        cuv = strtok(NULL, " ");
    }
    return 0;
}