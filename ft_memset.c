#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	ch;

	cs = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cs[i] = ch;
		i++;
	}
	return (s);
}
