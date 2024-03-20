/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:37:36 by rafpetro          #+#    #+#             */
/*   Updated: 2024/01/30 20:39:55 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			temp = (char *)&s[i];
		++i;
	}
	if (c == '\0')
		return ((char *)(s + i));
	else
		return (temp);
}
