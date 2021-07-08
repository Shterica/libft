#include "libft.h"

static size_t	word_count(char *s, char c)
{
	size_t	w_count;

	w_count = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			w_count++;
			while (*s && *s != c)
				s++;
			continue ;
		}
		s++;
	}
	return (w_count);
}

static size_t	word_len(char **s, char c)
{
	size_t	count;

	count = 0;
	while (**s)
	{
		if (**s && **s != c)
		{
			while (**s && **s != c)
			{
				count++;
				(*s)++;
			}
			return (count);
		}
		(*s)++;
	}
	return (count);
}

static void	arr_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
}

static int	fulfillment(char **splited, size_t w_count, char *s, char c)
{
	size_t	i;
	size_t	w_len;

	i = 0;
	w_len = 0;
	while (i < w_count)
	{
		w_len = word_len(&s, c);
		splited[i] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!splited[i])
		{
			arr_free(splited);
			return (1);
		}
		ft_bzero(splited[i], w_len + 1);
		ft_memcpy(splited[i], s - w_len, w_len);
		i++;
	}
	splited[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;
	size_t	w_count;

	if (!s)
		return (NULL);
	i = 0;
	w_count = word_count((char *)s, c);
	tmp = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (w_count + 1) * sizeof(char *));
	if (fulfillment(tmp, w_count, (char *)s, c) != 0)
	{
		free(tmp);
		return (NULL);
	}
	return (tmp);
}
