#include <stdio.h>

void	ft_putchar(char     c){write(1, &c, 1);}

//$>./rostring "Que la      lumiere soit et la lumiere fut"
//la lumiere soit et la lumiere fut Que
void    rostring(char   *str)
{
    int i;
    int save_min;
    int save_max;
    
    save_min = 0;
    save_max = 0;
    i = 0;
    while(str[i])
	{
		if ((str[i] >= 33 && str[i] <= 126) && save_min == 0)
		{
			save_min = i;
		}

		if ((str[i] >= 33 && str[i] <= 126) && (str[i + 1] == ' ') && (save_max == 0))
		{
		    save_max = i;
		    break;
		}
	    i++;
	}
	
	i += 1;
    while (str[i] < 33)
	{
		i++;
	}
	while(str[i])
	{
        if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
			printf("%c", str[i]);
		if ((str[i] >= 33 && str[i] <= 126))
			printf("%c", str[i]);
		++i;
	}
	
	int j = save_min;
	printf(" ");
	while (j <= save_max)
	{
	    printf("%c", str[j]);
	    ++j;
	}
	printf("\n");
}

int     main(int c, char **v)
{
    if (c == 2)
        rostring(v[1]);

    return (0);
}
/*
    while(str[i])
	{
		if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
			ft_char(str[i]);
		if ((str[i] >= 33 && str[i] <= 126))
			ft_char(str[i]);
		i++;
	}
*/



/*
Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>
--------------------------------------------------------------------------------
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

*/