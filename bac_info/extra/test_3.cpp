#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, text[100][101] = {'\0'}, aux[101];
    int con = 0, i;
    bool edez = false;
    cin.get(s, 101);
    
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        strcpy(text[con], cuv);
        con++;
        cuv = strtok(NULL, " "); 
    }
    for (i = 0; i < con && edez == false; i++)
        if (strlen(text[i]) % 2 != 0)
        {
            int mij = strlen(text[i]) / 2;
            memset(aux, '\0', sizeof(aux));
            strncpy(aux, text[i], mij+1);
            strncat(aux, text[i]+mij, 1);
            strcat(aux, text[i]+mij+1);
            for (int j = i+1; j < con; j++)
                if (strcmp(text[j], aux) == 0)
                {
                    edez = true;
                    break;
                }
        }
    if (edez == true)
        cout << "DA, DOAMNE DA!";
    else
        cout << "NU!";
    return 0;
}
