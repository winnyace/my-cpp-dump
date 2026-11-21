#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");
    int x, sec_pana_neg = 0, sec_dupa_neg = 0;
    bool sw = false;
    while (f >> x) {
        if (x > 0 && sw == false)
            sec_pana_neg++;
        else if (x < 0 && sw == false) {
            sec_dupa_neg++;
            sw = true;
        }
        else if (sw == true)
            sec_dupa_neg++;
    }
    f.close();
    if (sec_dupa_neg > sec_pana_neg)
        cout << sec_dupa_neg;
    else
        cout << sec_pana_neg;
    return 0;
}
