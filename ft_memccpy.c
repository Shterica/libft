#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*cdest;
	unsigned const char	*csrc;
	unsigned char		ch;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned const char *)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == ch)
			return ((void *)(cdest + i + 1));
		i++;
	}
	return (NULL);
}
