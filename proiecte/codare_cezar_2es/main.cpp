#include <ios>
#include <iostream>
#include <string>
#include <limits>

void choice(int& c)
{
    do {
        std::cout << "It's time to choose:\n";
        std::cout << "1. Coding a string with 1;\n";
        std::cout << "2. Decoding a string with 1.\n";
        std::cin >> c;
    } while (!(c >= 1 && c <= 2));
}

void decoding_string() 
{
    std::cout << "\nThis is the decoding string section.\nPlease give me a string that's coded by 1: "; 
    std::string input, output;
    std::getline(std::cin, input);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input.at(i) <= 'z' && input.at(i) != 'a')
            output += input.at(i)-1;
        else if (input.at(i) == 'a')
            output += input.at(i)+('z'-'a');
        else
            output += input.at(i);
    }
    std::cout << "The string decoded by 1 is: " << output;
}

void coding_string()
{
    std::cout << "\nThis is the coding string section.\nPlease give me a string: ";
    std::string input, output;
    std::getline(std::cin, input);
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input.at(i) >= 'a' && input.at(i) < 'z')
            output += input.at(i)+1;
        else if (input.at(i) == 'z')
            output += input.at(i)-('z'-'a');
        else
            output += input.at(i);
    }
    std::cout << "The string coded by 1 is: " << output;
}

int main()
{
    int choice_input;
    choice(choice_input);
    switch(choice_input)
    {
        case 1:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            coding_string();
            break;
        case 2:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            decoding_string();
            break;
        default:
            choice(choice_input);
            break;
    }
    return 0;
}
