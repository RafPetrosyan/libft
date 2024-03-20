/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:18:56 by rafpetro          #+#    #+#             */
/*   Updated: 2024/01/30 20:19:15 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	symb;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	symb = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == symb)
			return (str + i);
		++i;
	}
	return (0);
}
