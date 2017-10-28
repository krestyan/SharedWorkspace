#include <unistd.h>
#include <stdio.h>


/*
#include <stdio.h> // Allowed functions: write, exit -> <unistd.h> putstr

#define putstr printf

void    ultstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = ('A' - 1) + 26 - ('z' - str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ('a' - 1) + 26 - ('Z' - str[i]);
        i++;
    }
    putstr("%s\n", str);
}
*/


int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] || ((argv[1][i] > 64 && argv[1][i] < 90) || (argv[1][i] > 96 && argv[1][i] < 123)))
    {
        if (argv[1][i] > 64 && argv[1][i] < 90)
        {
            argv[1][i] = argv[1][i] + 32;
            i++;
        }
        else if (argv[1][i] > 96 && argv[1][i] < 123)
        {
            argv[1][i] = argv[1][i] - 32;
            i++;
        }
        else
            i++;
    }
    i = 0;
    while (argv[1][i])
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}