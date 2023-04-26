#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, k, k_cuv = 0, i;
    char s[11], voc[] = {"aeiou"}, cuv[21][10] = {'\0'};
    
    do 
    {
        cin >> n >> k;  
    } while (!(n >= 1 && k >= 1 && n <= 20 && k <= 20));
    i = 0;
    while (i != n)
    {
        cin >> s;
        if (strchr(voc, s[strlen(s)-1]) != NULL)
        {
            if (k_cuv < k)
            {
                strcpy(cuv[k_cuv], s);
                k_cuv++;
            }
        }
        i++;
    }
    cout << endl;
    for (i = 0; i < k; i++)
        cout << cuv[i] << endl;
    return 0;
}
