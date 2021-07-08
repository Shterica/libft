#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*cs1;
	unsigned const char	*cs2;

	i = 0;
	cs1 = (unsigned const char *)s1;
	cs2 = (unsigned const char *)s2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}
