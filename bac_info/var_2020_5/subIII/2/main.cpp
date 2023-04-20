#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, oglinda[256], rez[101] = {'\0'}; 
    cin.get(s, 101);
    bool sw = false;
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        memset(oglinda, '\0', sizeof(oglinda));
        if (strlen(cuv) % 2 != 0 && strlen(cuv) != 1)
        {
            for (int i = strlen(cuv)-1; i >= 0; i--)
            {
                int poz = (i - strlen(cuv) + 1) * -1;
                // cout << poz << endl;
                oglinda[poz] = cuv[i];
            }
            if (strcmp(oglinda, cuv) != 0)
            {
                strcat(rez, oglinda);
                strcat(rez, " ");
                sw = true;
            }
            else 
            {
                strcat(rez, cuv);
                strcat(rez, " ");
            }
        }
        else 
        {
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        cuv = strtok(NULL, " ");
    }
    if (sw)
    {
        strcpy(s, rez);
        cout << s;
    }
    else 
        cout << "nu exista";
}
