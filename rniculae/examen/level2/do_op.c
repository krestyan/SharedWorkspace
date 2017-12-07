/* //        \\
  //          \\
 //            \\
//==============\\
//   E X A M    \\
//==============\\

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
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// - + * / %

int ft_adn(int x, int y){   return (x + y);     }
int ft_scd(int x, int y){   return (x - y);     }
int ft_imp(int x, int y){   return (x / y);     }
int ft_inm(int x, int y){   return (x * y);     }
int ft_mod(int x, int y){   return (x % y);     }

int main(int arg_c, char **arg_v)
{
    if (arg_c != 4)
    {
        printf("\n");
        return (0);
    }

    int x = atoi(arg_v[1]);
    int y = atoi(arg_v[3]);

    if      (arg_v[2][0] == '+')
        printf("%d", ft_adn(x, y));

    else if (arg_v[2][0] == '-')
        printf("%d", ft_scd(x, y));

    else if (arg_v[2][0] == '/')
        printf("%d", ft_imp(x, y));

    else if (arg_v[2][0] == '*')
        printf("%d", ft_inm(x, y));

    else if (arg_v[2][0] == '%')
        printf("%d", ft_mod(x, y));

    return (0);
}

