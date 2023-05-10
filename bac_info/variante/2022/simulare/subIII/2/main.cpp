#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[251] = {'\0'}, *cuv, x[101] = {'\0'};
    cin.get(s, 251);
    cin >> x;

    cuv = strtok(s, ";");
    while (cuv != NULL) {
        if (cuv[0] == ' ')
            strcpy(cuv, cuv+1);

        bool sw = true;
        for (int i = 0; i < strlen(cuv) && sw == true; i++)
            if (cuv[i] != ' ') {
                if (cuv[i] != x[i])
                    sw = false;
            }
            else
                break;
        if (sw == true)
            cout << cuv+strlen(x)+1 << " ";

        cuv = strtok(NULL, ";");
    }
    return 0;
}
