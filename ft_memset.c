/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:43:59 by rafpetro          #+#    #+#             */
/*   Updated: 2024/01/30 20:44:01 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*str;
	size_t			i;

	i = 0;
	str = (char *)b;
	a = (unsigned char)c;
	while (i < len)
		str[i++] = a;
	return (b);
}
