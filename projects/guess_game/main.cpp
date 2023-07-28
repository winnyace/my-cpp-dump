#include <cstdlib>
#include <random>
#include <fmt/core.h>
#include <fmt/color.h>
#include <fmt/format.h>
#include <fmt/format-inl.h>
#include <iostream>
#include <limits>
#include <ios>

using namespace std;
using namespace fmt;

int max_limit;

void set_max_limit(int &max_limit)
{
    print(emphasis::bold, "Please, give me the biggest number you want to be generated as part of the game. Type any letter to exit.\n");
    cin >> max_limit;
    if (!cin.good())
        exit(EXIT_FAILURE);
    system("clear");
}

int get_number(int max_limit)
{
    random_device rng;
    uniform_int_distribution<int> dist(0, max_limit);
    int number = dist(rng);
    return number;
}

void choice(char &c)
{
    c = '\n';
    print(emphasis::bold | fg(color::royal_blue), "Want to keep playing?[y/n]\n");
    do
    {
        cin >> c;
    } while (c != 'y' && c != 'n');
}

void game_logic(int max_limit)
{
    int guesses_taken = 0, current_guess, current_number = get_number(max_limit);
    while (guesses_taken != 5) 
    {
        print(emphasis::bold, "Give me a number between"); 
        print(emphasis::bold | fg(color::dark_orange), " 0 "); 
        print(emphasis::bold, "and "); 
        print(emphasis::bold | fg(color::dark_orange), "{}. ", max_limit); 
        print(emphasis::bold, "You've "); 
        print(emphasis::bold | fg(color::orange_red), "{} ", 5 - guesses_taken); 
        print(emphasis::bold, "tries left.\nPress CTRL+C to exit.\n");
        do
        {
            cin >> current_guess;
        } while (cin.good() != true);
        if (current_guess == current_number) 
        {
            print(emphasis::bold | fg(color::deep_sky_blue), "Great! That's the number!");
            if (guesses_taken == 0)
                print(emphasis::bold | fg(color::deep_sky_blue), " It took you just {} try.\n", guesses_taken + 1);
            else 
                print(emphasis::bold | fg(color::deep_sky_blue), " It took you {} tries.\n", guesses_taken + 1);
            char c;
            choice(c);
            if (c == 'y')
                break;
            else if (c == 'n')
            {
                system("clear");
                print(emphasis::bold | fg(color::hot_pink), "Thanks for playing!");
                exit(EXIT_SUCCESS);
            }
        }
        else 
        {
            if (guesses_taken == 4)
            {
                print(emphasis::bold | fg(color::red), "Game over. Press enter to keep playing.\nThe number I was thinking was ");
                print(emphasis::bold | fg(color::orange), "{}.\n", current_number);
                char c;
                choice(c);
                if (c == 'y')
                    break;
                else if (c == 'n')
                {
                    system("clear");
                    print(emphasis::bold | fg(color::hot_pink), "Thanks for playing!");
                    exit(EXIT_SUCCESS);
                }
            }
            else
                if (current_guess < current_number)
                {
                    guesses_taken++;
                    print(emphasis::bold, "No. My number is "); print(emphasis::bold | emphasis::italic | fg(color::forest_green), "higher.\n");
                }
                else
                {
                    guesses_taken++;
                    print(emphasis::bold, "No. My number is "); print(emphasis::bold | emphasis::italic | fg(color::dark_green), "lower.\n");
                }
        }
    }
}

int main()
{
    system("clear");
    set_max_limit(max_limit);
    while (true)
    {
        system("clear");
        game_logic(max_limit);
    }
    return 0;
}
