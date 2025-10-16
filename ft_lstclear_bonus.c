#include "libft.h"
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstnext;

	if(!lst || !del)
		return;
	while(*lst)
	{
		lstnext = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lstnext;
	}
	*lst = NULL;
}
