#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		do_op(int a, char op, int b)
{
	if (op == '+')
		return (a+b);
	else if (op == '-')
		return (a-b);
	else if (op == '*')
		return (a*b);
	else if (op == '/')
		return (a/b);
	else if (op == '%')
		return (a%b);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int res = 0;
	if (argc == 4)
	{
		res = do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
		printf("%d\n", res);
	}
	else
	    printf("\n");

	return (0);
}
//=========================================================
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if(argc != 4)
		ft_putchar('\n');
	else if(argv[2][1] != '\0')
		ft_putchar('\n');
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[3]);

		if 		(argv[2][0] == '+')
			printf("%d\n", x+y);
		else if (argv[2][0] == '-')
			printf("%d\n", x-y);
		else if (argv[2][0] == '*')
			printf("%d\n", x*y);
		else if (argv[2][0] == '/')
			printf("%d\n", x/y);
		else if (argv[2][0] == '%')
			printf("%d\n", x%y);
	}
}
/*

$> ./cu9tsx5m6jw823n49lzxfay6 
$> diff -U 3 user_output_test1 test1.output | cat -e
--- user_output_test1	2017-10-27 18:47:04.000000000 +0200$
+++ test1.output	2017-10-27 18:47:04.000000000 +0200$
@@ -0,0 +1 @@$
+$

Diff KO :(
Grade: 0

*/