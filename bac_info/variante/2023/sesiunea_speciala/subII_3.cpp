#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[21];
    int k;
    cin >> s;
    for (k = strlen(s)-1; k >= 0; k--)
        if (s[k] == s[0]) {
            for (int i = 0; i <= k; i++)
                cout << s[i];
            cout << " ";
        }
    return 0;
}

