/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:09:30 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/11 13:57:36 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
	size_t	i;
	char	*str;

	if (memb > 0 && size > 0 && (4294967295 / memb < size))
		return (0);
	str = (char *)(malloc(memb * size));
	if (str == 0)
		return (0);
	i = 0;
	while (i < memb * size)
		str[i++] = 0;
	return ((void *)str);
}
