#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "Ana Popescu", id[50] = {'\0'};
    int i, poz;
    for (i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
        {
            poz = i+1;
            break;
        }
    strcpy(id, s+poz);
    strcat(id, "2022");
    cout << id;
}
