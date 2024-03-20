/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:40:19 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/10 16:46:11 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if ((dst == 0 || src == 0) && size == 0)
		return (0);
	i = 0;
	len = ft_strlen(dst);
	if (size < len)
		return (size + ft_strlen(src));
	while (len + 1 < size && src[i] != '\0')
	{
		dst[len] = src[i];
		++i;
		++len;
	}
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
