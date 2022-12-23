/*
Fişierul bac.txt conţine un şir crescător de cel mult 10^6 numere naturale din intervalul [0,10^9],
separate prin câte un spaţiu. Se cere să se afişeze pe ecran fiecare număr distinct din şir, urmat de
numărul de apariţii ale acestuia în şir. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate și al timpului de executare.
Exemplu: dacă fişierul bac.txt conține numerele 0 0 0 5 5 5 5 7 7 11 20 20
se afișează 0 3 5 4 7 2 11 1 20 2
*/

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    ifstream f("/home/ion/Documents/Projects/C++_dump/bac_info/Teste_2020/Test11/subIII_3/bac.txt");
    int num, con, num_ant = INT_MIN;
    bool prim_citit = false;
    if (f.good() == true)
    {
        while (f >> num)
        {
            if (num_ant != num && prim_citit == false)
            {
                num_ant = num;
                con = 1;
                prim_citit = true;
            }
            else if (num_ant != num && prim_citit == true)
            {
                cout << num_ant << " " << con << " ";
                num_ant = num;
                con = 1;
            }
            else
                con++;
        }
        cout << num << " " << con;
    }
    else
        cout << "nu mere";
    f.close();
    return 0;
}
