#include <iostream>
#include <cstring>
using namespace std;

char rez[256];

int main()
{
    char s[256], cuv[50], *aux;
    int c;
    bool d_citit = false;
    cin.get(s, 256);
    aux = strtok(s, " ");
    while (aux != NULL)
    {
        c = strlen(aux);
        if (c % 2 == 0)
        {
            strncpy(cuv, aux, c/2);
            cuv[c/2] = '\0';
            if (strcmp(cuv, aux+c/2) == 0)
            {
                d_citit = true;
                strcpy(aux+c/2, "*");
                aux[c/2+1] = '\0';
            }
        }
        strcat(rez, aux);
        strcat(rez, " ");
        aux = strtok(NULL, " ");
    }
    if (d_citit == true)
    {
        strcpy(s, rez);
        cout << s;
    }
    else
        cout << "nemodificat";
    return 0;
} 
