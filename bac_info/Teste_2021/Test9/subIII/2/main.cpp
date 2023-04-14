#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], *cuv, vocale[] = "aeiou", vocala_gasita = '\0';
    bool cuvinte_cautate_gasite = false, sw = false;
    cin.get(s, 101);
    cuv = strtok(s, " ");
    while (cuv != NULL)
    {
        for (int i = 0; i < strlen(cuv); i++)
            if (strchr(vocale, cuv[i]) != NULL && vocala_gasita == '\0')
            {
                vocala_gasita = cuv[i];
                sw = true;
            }
            else if (strchr(vocale, cuv[i]) != NULL  && vocala_gasita != cuv[i])
            {
                sw = false;
                break;
            }
        if (sw)
        {
            cuvinte_cautate_gasite = true;
            cout << cuv << endl;
        }
        cuv = strtok(NULL, " ");
    }
    if (!(cuvinte_cautate_gasite))
        cout << "nu exista";
    return 0;
}
