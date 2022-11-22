#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256], cuv[50], aux[100];
    int poz, con;
    bool e_dublu;
    cin.get(s, 256);
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            strcpy(cuv, s+i);
            strtok(cuv, " ");

            i += strlen(cuv);

            con = strlen(cuv)/2; e_dublu = true;
            for (size_t j = 0; j < strlen(cuv)/2 && e_dublu == true; j++)
            {
                if (cuv[j] != cuv[con])
                    e_dublu = false;
                con++;
            }

            if (e_dublu == true)
            {
                strcpy(aux, s+i);
                
            }
        }
    }
    return 0;
} 