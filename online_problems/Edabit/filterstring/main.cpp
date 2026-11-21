#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

vector<int> filterString(string str)
{
    vector<int> v = {0, 0, 0, 0};
    for (auto& i : str)
    {
        if (i >= 'A' && i <= 'Z')
            v[0]++;
        else if (i >= 'a' && i <= 'z')
            v[1]++;
        else if (i >= '0' && i <= '9')
            v[2]++;
        else
            v[3]++;
    }
    return v;
}

int main()
{
    string input;
    cin >> input;
    vector<int> output = filterString(input);
    for (auto& i : output)
        cout << i << " ";
    return 0;
}
