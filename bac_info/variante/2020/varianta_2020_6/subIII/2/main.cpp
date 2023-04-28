#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, rez[101] = {'\0'};
    bool sw = false;
    
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        if (strlen(cuv) >= 3) {
            sw = true;
            char oglinda[101] = {'\0'};
            for (int i = 1; i < strlen(cuv); i++)
                oglinda[i-1] = cuv[i];
            oglinda[strlen(oglinda)] = cuv[0];
            strcat(rez, oglinda);
            strcat(rez, " ");
        }
        else {
            strcat(rez, cuv);
            strcat(rez, " ");
        }
        cuv = strtok(NULL, " ");
    }
    if (sw) {
        strcpy(s, rez);
        cout << s;
    }
    else
        cout << "nu exista";
    return 0;
}
