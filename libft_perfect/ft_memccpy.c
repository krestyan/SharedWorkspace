#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dsttmp;
	unsigned char	*srctmp;
	unsigned char	ctmp;

	ctmp = (unsigned char)c;
	dsttmp = (unsigned char*)dst;
	srctmp = (unsigned char*)src;
	while (n-- > 0)
	{
		if (*srctmp != ctmp)
		{
			*dsttmp = *srctmp;
			srctmp++;
			dsttmp++;
		}
		else
			break ;
	}
	if ((int)n != -1)
	{
		*dsttmp = *srctmp;
		return (++dsttmp);
	}
	return (NULL);
}
