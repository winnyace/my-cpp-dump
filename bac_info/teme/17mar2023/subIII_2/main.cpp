#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256], c[31], *cuv, voc_c, voc_cuv, voc[] = "aeiou";
    bool arerime = false;
    cin.get(s, 256);
    cin >> c;

    for (int i = strlen(c)/2-1; i <= strlen(c); i++)
        if(strchr(voc, c[i]) != NULL)
        {
            voc_c = c[i];
            break;
        }
    
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        for (int i = strlen(cuv)/2-1; i <= strlen(cuv); i++)
            if (strchr(voc, cuv[i]) != NULL)
            {
                voc_cuv = cuv[i];
                break;
            }
        if (voc_c == voc_cuv)
        {
            arerime = true;
            cout << cuv << endl;
        }
        cuv = strtok(NULL, " ");
    }
    if (arerime == false)
        cout << "nu exista";
    return 0;
}
