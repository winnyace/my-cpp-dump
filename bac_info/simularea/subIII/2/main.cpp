#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], rez[101] = {'\0'}, *cuv, cuvinte_mari[][100] = {"FAMILIA", "GENUL", "SPECIA"}, cuvinte_mici[][100] = {"familia", "genul", "specia"};
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (strchr(cuv, '.') != NULL)
        {
            cuv[strlen(cuv)-1] = '\0';
            for (int i = 0; i < 3; i++)
                if (strstr(cuvinte_mari[i], cuv) != NULL)
                {
                    strncat(rez, cuvinte_mici[i], 3);
                    strcat(rez, ". ");
                    break;
                }
        }
        else 
        {
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        cuv = strtok(NULL, " ");
    }
    strcpy(s, rez);
    cout << s;
    return 0;
}
