/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:39:38 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/10 12:58:34 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (s == 0)
		return (0);
	i = ft_strlen(s);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i >= 0)
	{
		str[i] = s[i];
		--i;
	}
	++i;
	while (str[i] != '\0')
	{
		str[i] = (*f)((unsigned int)i, str[i]);
		++i;
	}
	return (str);
}
