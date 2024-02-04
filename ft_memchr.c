/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:00:17 by japatel           #+#    #+#             */
/*   Updated: 2023/10/20 15:59:31 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src = s;
	unsigned char		uc;
	size_t				i;

	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == uc)
		{
			return ((void *)(src + i));
		}
		i++;
	}
	return (NULL);
}
