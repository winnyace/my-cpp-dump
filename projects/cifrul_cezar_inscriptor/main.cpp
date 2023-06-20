#include <iostream>
#include <string>

int main()
{
    std::string input;
    int n;
    char aux;
    std::cout << "fraza:"; std::getline(std::cin, input);
    std::cout << "permutare cu:"; std::cin >> n;

    std::string res;
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i) >= 'a' && input.at(i) <= 'z') 
        {
            res += input.at(i)+n;
            if (res.at(i) > 'z')
            {
                aux = res.at(i);
                res.pop_back();
                res += aux-26; 
            }
        }

        if (input.at(i) >= 'A' && input.at(i) <= 'Z')
        {
            res += input.at(i)+n;
            if (res.at(i) > 'Z')
            {
                aux = res.at(i);
                res.pop_back();
                res += aux-26; 
            }
        }

        if (input.at(i) == ' ') 
            res += ' ';
    }
    
    std::string res2;
    for (int i = 0; i < res.size(); i++)
    {
        if (res.at(i) >= 'a' && res.at(i) <= 'z') 
        {
            res2 += res.at(i)-n;
            if (res2.at(i) < 'a')
            {
                aux = res2.at(i);
                res2.pop_back();
                res2 += aux+26; 
            }
        }

        if (res.at(i) >= 'A' && res.at(i) <= 'Z')
        {
            res2 += res.at(i)-n;
            if (res2.at(i) < 'A')
            {
                aux = res2.at(i);
                res2.pop_back();
                res2 += aux+26; 
            }
        }

        if (res.at(i) == ' ') 
            res2 += ' ';
    }

    std::cout << "\nencrypted: " << res;
    std::cout << "\ndecrypted: " << res2;
    return 0;
}
