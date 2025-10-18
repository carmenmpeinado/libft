/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:37:52 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/18 14:11:16 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstnext;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lstnext = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lstnext;
	}
	*lst = NULL;
}
