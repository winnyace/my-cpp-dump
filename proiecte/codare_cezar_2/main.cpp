#include <cstdlib>
#include <ios>
#include <iostream>
#include <string>
#include <limits>
#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/format-inl.h>
#include <fmt/color.h>

void choice(int& c)
{
    system("clear");
    do {
        fmt::print(fmt::emphasis::bold, "It's time to choose:\n");
        fmt::print(fmt::emphasis::bold | fmt::fg(fmt::color::red), "0 for exiting out of the program\n");
        fmt::print("1. Coding a string by 1 character forward;\n");
        fmt::print("2. Decoding a string for an 1 character forward coded string\n");
        std::cin >> c;
    } while (!(c >= 0 && c <= 2));
}

void decoding_string() 
{
    system("clear"); // I know someone will hate me for this but fuck it!
    fmt::print(fmt::emphasis::bold, "This is the decoding string section.");
    fmt::print("\nPlease give me a string that's coded by 1: "); 
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
    fmt::print(fmt::emphasis::bold | fmt::fg(fmt::color::deep_pink), "The string decoded by 1 is: {}", output);
    fmt::print(fmt::emphasis::bold, "\nPress any key to continue.");
    std::cin.ignore();
}

void coding_string()
{
    system("clear");
    fmt::print(fmt::emphasis::bold, "This is the coding string section.");
    fmt::print("\nPlease give me a string: ");
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
    fmt::print(fmt::emphasis::bold | fmt::fg(fmt::color::deep_sky_blue), "The string encoded is: {}", output);
    fmt::print(fmt::emphasis::bold, "\nPress any key to continue.");
    std::cin.ignore();
}

int main()
{
    int choice_input;
    while (true) {
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
            case 0:
                fmt::print(fmt::emphasis::bold, "See you next time...");
                return 0;
            default:
                choice(choice_input);
                break;
        }
    }
    return 0;
}
