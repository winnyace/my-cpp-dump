#include <iostream>
#include <fstream>
using namespace std;

struct produs
{
    int cod;
    float cant, pret;
};
struct magazin
{
    produs P[100]; 
    int nrProduse;
} M;

int main()
{
    ifstream f("date");
    f >> M.nrProduse;
    for (int i = 0; i < M.nrProduse; i++)
        f >> M.P[i].cod >> M.P[i].cant >> M.P[i].pret;
    for (int i = 0; i < M.nrProduse; i++)
    {
        float stoc = M.P[i].cant * M.P[i].pret;
        if (stoc > 0)
            cout << M.P[i].cant * M.P[i].pret << endl; 
        else
            cout << M.P[i].cod << endl;
    }
}
