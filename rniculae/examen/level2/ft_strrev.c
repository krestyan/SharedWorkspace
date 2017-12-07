#include <stdio.h>
#include <stdlib.h>

char        *ft_strrev(char *str)
{
	int		index;
	int		len;
	char	temp;

	len = 0;
	while (str[len] != '\0')
		len++;
	index = -1;
	while ((++index) < (--len))
	{
		temp = str[index];
		str[index] = str[len];
		str[len] = temp;
	}
	return (str);
}

int main()
{
    char c[] = "Notificare albastra";
    ft_strrev(c);
    printf("return = (%s)\n", c);
    return (0);
}