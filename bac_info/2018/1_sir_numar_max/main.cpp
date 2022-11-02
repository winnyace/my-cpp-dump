#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // un sir. are numere naturale si caractere. sa se afiseze cel mai mare numar din sirul citit de la tastatura.
    char s[101], *s_num;
    int num, max = 0;
    cin.get(s, 101);
    
    for(size_t i = 0; i < strlen(s); i++)
        if (s[i] >= '0' && s[i] <= '9')
        {
            char aux[30]; strcpy(aux, s+i);
            s_num = strtok(aux, " ");
            num = atoi(s_num); 
            i += strlen(s_num);

            if (max < num)
                max = num;
        }
    cout << max;
}
