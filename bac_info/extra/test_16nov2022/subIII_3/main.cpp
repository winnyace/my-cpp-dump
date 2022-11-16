// fisier numit "bac.txt". are un sir de numere. să se determine factorialul fiecarui numar din sir, sa se numere cați de zero are
// și să se afiseze cate numere are aceste zero-uri dar si nr max de zero-uri care au fost numerate.

// din ceva motiv, nu merge pentru exemplul dat: 102 12 50 100. trebuia să arate 2 24, dar arată 1 4. numerele date sunt foarte mari.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int con_zero, con_max = 0, con_num, num, i;
    unsigned long long num_fac;
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/extra/test_16nov2022/subIII_3/bac.txt");
    
    if ( f.good() == true )
    {
        while (f >> num)
        {
            num_fac = 1; con_zero = 0;
            for (i = 1; i <= num; i++)
                num_fac *= i;
            cout << num_fac << " ";
            while (num_fac != 0)
            {
                if (num_fac%10 == 0)
                    con_zero++;
                num_fac /= 10;
            }
            cout << con_zero << endl;
            if (con_zero > con_max)
            {
                con_num = 1;
                con_max = con_zero;
            }
            else if (con_zero == con_max)
                con_num++;
        }
        cout << con_num << " " << con_max;
    }
    else
        cout << "fisier neexistent";
    f.close();
    return 0;
}
