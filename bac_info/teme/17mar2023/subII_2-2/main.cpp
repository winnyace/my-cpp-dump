#include <iostream>
using namespace std;

struct Jucator {
    int nrTricou, marineTricou;
};
struct Echipa
{
    int nrJucatori;
    Jucator juc[20];
}E;

int main()
{
    cin >> E.nrJucatori;
    for (int i = 0; i < E.nrJucatori; i++)
        cin >> E.juc[i].nrTricou >> E.juc[i].marineTricou;

    for (int i = 0; i < E.nrJucatori; i++)
        cout << E.juc[i].nrTricou << " " << E.juc[i].marineTricou << endl;
    return 0;
}
