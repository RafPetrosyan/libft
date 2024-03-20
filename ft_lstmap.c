/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstma.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:50:32 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/10 20:10:11 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	list = 0;
	while (lst)
	{
		content = f(lst->content);
		if (content == 0)
		{
			ft_lstclear(&list, del);
			return (0);
		}
		ft_lstadd_back(&list, ft_lstnew(content));
		lst = lst -> next;
	}
	return (list);
}
