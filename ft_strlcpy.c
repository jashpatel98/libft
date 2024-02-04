/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:57:59 by japatel           #+#    #+#             */
/*   Updated: 2023/10/21 05:14:34 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	char			*a;
	unsigned int	x;

	i = 0;
	a = (char *)src;
	while (src[i] != '\0')
	{
		i++;
	}
	src = a;
	x = 0;
	while (dstsize > 1 && src[x] != '\0')
	{
		dst[x] = src[x];
		dstsize--;
		x++;
	}
	if (dstsize > 0)
	{
		dst[x] = '\0';
	}
	return (i);
}
