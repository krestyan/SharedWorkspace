#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main()
{
	char	str1[7] = {'a', 'a', '\0', 'b', 'b', 'b', '\0'};
//	char	str2[50] = "";
	char	str3[50] = "xx7y";

	printf("ft: %s\n", ft_memccpy(str1, str3, '7', 4));
	printf("dupa: %s\n", str1);
	return (0);
}
