#include <iostream>
#include <string>

void leftPad(std::string& str, int len, char ch)
{
    std::string output;
    for (int i = 0; i < len; i++)
        output += ch; 
    output += str;
    str.clear();
    str = output;
}

int main()
{
    std::string s;
    std::getline(std::cin, s);
    leftPad(s, 10, ' '); 
    std::cout << s;
}
