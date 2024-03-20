/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:49:35 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/11 15:50:06 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*temp;

	if (lst == 0)
		return (0);
	n = 1;
	temp = lst;
	while (temp->next != 0)
	{
		++n;
		temp = temp->next;
	}
	return (n);
}
