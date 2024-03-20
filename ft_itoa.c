/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:05:52 by rafpetro          #+#    #+#             */
/*   Updated: 2024/02/02 20:54:04 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_adddig(char *str, int number, int digits)
{
	int	i;

	i = 0;
	str[digits] = '\0';
	if (number < 0)
	{
		str[i++] = '-';
		number *= -1;
	}
	while (i < digits)
	{
		str[digits - 1] = number % 10 + '0';
		--digits;
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*str;
	int		temp;

	digit = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		++digit;
	temp = n;
	while (temp / 10 != 0)
	{
		temp /= 10;
		++digit;
	}
	str = (char *)malloc((digit + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_adddig(str, n, digit);
	return (str);
}
