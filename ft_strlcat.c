#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	if (d_len < n - 1 && n > 0)
	{
		while (src[i] != '\0' && d_len + i < n - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (d_len >= n)
		d_len = n;
	return (d_len + s_len);
}
