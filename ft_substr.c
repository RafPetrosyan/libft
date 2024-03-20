/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:35:21 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/10 12:34:29 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	i = 0;
	while (s[start + i] != '\0' && i < len)
		++i;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		++i;
	}
	str[i] = '\0';
	return (str);
}
