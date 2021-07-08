#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*csrc;
	unsigned char		*cdest;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned const char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return ((void *)dest);
}
