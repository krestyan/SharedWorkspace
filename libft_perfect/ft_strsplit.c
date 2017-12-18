
#include "libft.h"

static int	ft_worlen(char const *s, char c)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while ((s[i] != c) && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static int	ft_worno(char const *s, char c)
{
	int	count;
	int inword;

	count = 0;
	inword = 0;
	while (*s != '\0')
	{
		if (inword == 1 && *s == c)
			inword = 0;
		if (inword == 0 && *s != c)
		{
			inword = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		worno;

	i = 0;
	if (!s)
		return (NULL);
	worno = ft_worno(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (1 + worno))))
		return (NULL);
	while (i < worno)
	{
		while (*s && *s == c)
			s++;
		res[i] = ft_strsub((char const *)s, 0, ft_worlen((char const *)s, c));
		s = s + ft_worlen(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
