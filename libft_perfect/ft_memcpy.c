#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dsttmp;
	unsigned char	*srctmp;

	dsttmp = (unsigned char *)dst;
	srctmp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dsttmp[i] = srctmp[i];
		i++;
	}
	return (dst);
}
