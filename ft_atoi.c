/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:31:12 by japatel           #+#    #+#             */
/*   Updated: 2023/10/26 13:57:46 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_char_to_digit(int *n, const char *str, int *i)
{
	*n = (*n * 10) + (str[*i] - '0');
	(*i)++;
	return (*n);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negate;
	int	n;

	negate = 0;
	n = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		&& str[i] != '\0')
		i++;
	if (str[i] == '-' && str[i] != '\0')
	{
		negate = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
		convert_char_to_digit(&n, str, &i);
	if (negate == 1)
		return (-n);
	return (n);
}
