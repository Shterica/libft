#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*cs;
	unsigned char		ch;

	i = 0;
	cs = (unsigned const char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (cs[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
