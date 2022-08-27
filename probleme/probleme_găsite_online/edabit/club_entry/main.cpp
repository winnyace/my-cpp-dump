#include <iostream>
#include <string>
using namespace std;

int clubEntry(string word)
{
    int result = 0;
    for (int i = 0; i < word.size()-1; i++)
    {
        if (word.at(i) == word.at(i+1))
        {
            result = int(word.at(i)) - 64 - 32;
            break;
        }
    }
    if (result != 0)
        return result *= 4;
    else
        return 0;
}


int main()
{
    string input;
    cin >> input;
    cout << clubEntry(input);
    return 0;
}
