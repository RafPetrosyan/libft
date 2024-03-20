/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:28:38 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/02 13:24:02 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	sr;

	i = 0;
	sr = n - 1;
	if (dest == src || n == 0)
		return (dest);
	if (src < dest)
	{
		while (i++ < n)
		{
			((unsigned char *)dest)[sr] = ((unsigned char *)src)[sr];
			--sr;
		}
		((unsigned char *)dest)[0] = ((unsigned char *)src)[0];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			++i;
		}
	}
	return (dest);
}
