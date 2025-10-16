
#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*final_node;

	if(!lst)
		return (NULL);
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	final_node = lst;
	return (final_node);
}
