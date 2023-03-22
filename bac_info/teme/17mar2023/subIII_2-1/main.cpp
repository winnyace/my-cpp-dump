#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256], c[31], *cuv, *aux;
    bool arerime = false;
    cin.get(s, 256);
    cin >> c;

    for (int i = strlen(c)-1; i >= 0; i--)
        if (strchr("aeiou", c[i]) != 0)
        {
            strcpy(c, c+i);
            break;
        }

    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        aux = cuv+strlen(cuv)-strlen(c);
        if (strcmp(aux, c) == 0)
        {
            arerime = true;
            cout << cuv << " ";
        }
        cuv = strtok(NULL,  " ");
    }
    if (arerime == false)
        cout << "nu exista";
    return 0;
}
