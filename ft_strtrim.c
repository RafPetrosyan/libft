/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:50:42 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/10 12:57:48 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (s1 == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0')
	{
		if (ft_check(s1[start], set))
			++start;
		else
			break ;
	}
	while (end >= start)
	{
		if (ft_check(s1[end], set))
			--end;
		else
			break ;
	}
	if (!ft_check(s1[start], set))
		return (ft_substr(s1, start, end - start + 1));
	return (ft_strdup(""));
}
