#include "libft.h"

int	ft_isalpha(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= 'A' && x <= 'Z')
		return (1);
	return (0);
}
