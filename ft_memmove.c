/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:59:50 by japatel           #+#    #+#             */
/*   Updated: 2023/10/20 16:14:08 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	size_t				i;

	d = dst;
	if (d < s)
	{
		return (ft_memcpy(d, s, len));
	}
	else if (d > s)
	{
		d += len;
		s += len;
		i = 0;
		while (i < len)
		{
			d--;
			s--;
			*d = *s;
			i++;
		}
	}
	return (dst);
}
