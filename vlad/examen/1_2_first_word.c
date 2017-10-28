#include <unistd.h>

#define COND (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n')

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc !=2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (COND)
        i++;
    while (!(COND) && argv[1][i] != 0)
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}