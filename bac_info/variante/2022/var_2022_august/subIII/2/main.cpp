#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[51];
    cin >> s;
    for (unsigned int i = 0; i < strlen(s); i++)
        if (strchr("aeiou", s[i]) == NULL)
            for (char j = s[i] - 1; j >= 'a'; j--)
                if (strchr("aeiou", j) != NULL) {
                    s[i] = j;
                    break;
                }
    cout << s;
}
