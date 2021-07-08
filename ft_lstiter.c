#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (NULL != lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
