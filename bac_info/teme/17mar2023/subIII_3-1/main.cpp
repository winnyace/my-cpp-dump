#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");
    int x, v_fr[10] = {0};
    unsigned long int num = 0;
    bool sw = true;
    while (f >> x)
        v_fr[x]++;
    for (int i = 8; i >= 2 && sw == true; i = i-2)
        if (v_fr[i] > 0)
        {
            if (v_fr[i] % 2 == 0)
            {
                if (v_fr[i] / 2 == 1)
                {
                    num = num * 10 + i;
                    v_fr[i]--;
                }
                else 
                {
                    int l = v_fr[i] / 2;
                    while (v_fr[i] != l)
                    {
                        num = num * 10 + i;
                        v_fr[i]--;
                    }
                }
            }
            else
                sw = false;
        }
    for (int i = 9; i >= 1 && sw == true;)
    {
        if (v_fr[i] > 0)
        {
            if (v_fr[i] % 2 == 0)
            {
                if (v_fr[i] / 2 == 1)
                {
                    num = num * 10 + i;
                    v_fr[i]--;
                }
                else 
                {
                    int l = v_fr[i] / 2;
                    while (v_fr[i] != l)
                    {
                        num = num * 10 + i;
                        v_fr[i]--;
                    }
                }
            }
            else
                sw = false;
        }
    }
    cout << num;
    f.close();
    return 0;
}
