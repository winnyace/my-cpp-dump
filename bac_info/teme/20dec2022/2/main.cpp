#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[21], voc_mic[] = "aeiou", voc_mare[] = "AEIOU";
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr(voc_mic, s[i]) != NULL)
        {
            char c = s[i]-32;
            if (strchr(s, c) == NULL)
                cout << c;
        }
        if (strchr(voc_mare, s[i]) != NULL)
        {
            char c = s[i]+32;
            if (strchr(s, c) == NULL)
                cout << c;
        }
    }    
}
