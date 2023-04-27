#include <iostream>
#include <vector>
using namespace std;

/* librăria <vector> inclusă în C++, ne oferă un vector, cu alocare dinamică fără ca noi se ne mai batem capul.
 * numele este puțin prost ales, mai ales pentru noi, românii.
 * fiind un container, avem error checking și folosirea librăriei <algorithm>, precum și alte motive. */

int main()
{
    vector<int> vec;
    for (auto& i : vec) {
        int n; cin >> n;
        vec.push_back(n); // așa inserăm elemente în vector pe ultima poziție.
    }

    for (auto& i : vec)
        cout << i << " ";
    // documentație (engleză): http://cplusplus.com/reference/vector/vector/
}
