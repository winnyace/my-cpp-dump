#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<unsigned long long> fiboNums;

unsigned long long fibo(int input)
{
    if (input <= 0)
    {
        return 0;
    }

    unsigned long long x = 0, y = 1, r;
    while (input > 0)
    {
        r = x + y;
        x = y;
        y = r;
        input--;
    }
    return r;
}

int main()
{
    int input;
    std::cout << "Give me a number, please:";
    if (!(std::cin >> input)) 
    {
        std::cout << "I asked for a number, but I got something else. Please rerun the program and try again.";
        exit(EXIT_FAILURE);
    } 
    
    for (int i = 0; i < input; i++)
    {
        unsigned long long temp = fibo(i);
        fiboNums.push_back(temp);
    }
    std::cout << "The fibonacci numbers up to element " << input << " are:\n";
    for (auto& i : fiboNums)
    {
        std::cout << i << " ";
    }
}
