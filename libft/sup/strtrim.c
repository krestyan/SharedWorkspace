#include "../includes/libft.h"

char *ft_strtrim(char const *s)
{
	char *o;
	int lastword;
	char *temp;
	int i;
	int start;

	if(!s)
		return (NULL);
	lastword = ft_strlen(s);
	o = (char *)s;
	i = 0;
	while(o[i] == ' ' || o[i] == '\n' || o[i] == '\t')
		i++;
	start = i;
	while(o[i])
	{
		if ((o[i] > 32 && o[i] != 127) && (o[i + 1] < 33 || o[i + 1] == 127))
			lastword = i;
		i++;
	}
	temp = ft_memalloc(lastword - start + 2);
	if(!temp)
		return (NULL);
	ft_strncpy(temp, o + start, lastword - start + 1);
	return (temp);
}
