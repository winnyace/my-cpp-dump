#include <stdio.h>
#include <unistd.h>

// This shit took me too long to find a solution online.

int main()
{
    fprintf(stdout, "Loading");
    fflush(stdout);
    sleep(1);
    while (true)
    {
        for (int i = 1; i <= 3; i++)
        {
            fprintf(stdout, ".");
            fflush(stdout);
            sleep(1);
        }
        for (int i = 1; i <= 3; i++)
        {
            fprintf(stdout, "\033[D \033[D");
            fflush(stdout);
            sleep(1);
        }
    }
}
