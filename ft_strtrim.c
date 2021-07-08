#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	int		finish;
	int		start;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	finish = ft_strlen(s1);
	while (s1[start] != '\0' && ft_isinset(s1[start], set))
		start++;
	while (finish > start && ft_isinset(s1[finish - 1], set))
		finish--;
	p = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!p)
		return (NULL);
	while (start < finish)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
