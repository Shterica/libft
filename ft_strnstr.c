#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	m;

	if (lit[0] == '\0')
		return ((char *)big);
	m = 0;
	if (!len)
		return (NULL);
	while (big[m] != '\0' && m < len)
	{
		if (big[m] == lit[0])
		{
			i = 0;
			while (big[m + i] == lit[i]
				&& lit[i] != '\0' && m + i < len)
				i++;
			if (lit[i] == '\0')
				return ((char *)big + m);
		}
		m++;
	}
	return (NULL);
}
