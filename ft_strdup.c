#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sd;
	size_t	i;

	i = 0;
	sd = (char *)malloc(sizeof(const char) * (ft_strlen(s) + 1));
	if (!sd)
		return (NULL);
	while (s[i] != '\0')
	{
		sd[i] = s[i];
		i++;
	}
	sd[i] = '\0';
	return (sd);
}
