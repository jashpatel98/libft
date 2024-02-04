/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:55:16 by japatel           #+#    #+#             */
/*   Updated: 2023/10/24 15:13:17 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		n_digits;
	int		temp;
	char	*result;

	temp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_digits = count_digits(n);
	if (n == 0)
		return (ft_strdup("0"));
	result = (char *)ft_calloc(n_digits + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
		n = -n;
	while (n_digits > 0)
	{
		result[n_digits - 1] = (n % 10) + '0';
		n_digits--;
		n /= 10;
	}
	if (temp < 0)
		result[0] = '-';
	return (result);
}
