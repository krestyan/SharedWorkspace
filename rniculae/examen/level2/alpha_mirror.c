#define Low(x)  ('z' - (25 - ('z' - x)))
#define High(x) ('Z' - (25 - ('Z' - x)))

#define lit(x) (x >= 'a' && x <= 'z')
#define big(x) (x >= 'A' && x <= 'Z')

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c){write(1, &c, 1);}

void	alpha_mirror(char *str)
{
	int i;
	while(str[i])
	{
		if lit(str[i])
			ft_putchar(Low(str[i]));
		else if big(str[i])
			ft_putchar(High(str[i]));
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}



int		main(int c, char **v)
{
	//	ABC - ZYX;
	//	printf("Debug: %c", 'z' - (25 - ('z' - 'c')) );
	if(c == 2)
		alpha_mirror(v[1]);
	else
		ft_putchar('\n');
	return(0);
}

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string after replacing each alphabetical
	character by the opposite alphabetical character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/