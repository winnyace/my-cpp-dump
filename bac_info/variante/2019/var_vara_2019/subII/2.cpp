#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[21] = {'\0'}, b[21];
    cin >> b;
    if (strlen(b) >= 3) {
        strcpy(a, b+(strlen(b)-3));    
        cout << a;
    }
    else
        cout << "nedeterminat";
}
