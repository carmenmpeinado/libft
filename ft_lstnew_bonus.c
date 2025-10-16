#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof (t_list));
	if(!newlst)
	{
		free (newlst);
		return (0);
	}
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
