/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:00:21 by japatel           #+#    #+#             */
/*   Updated: 2023/10/18 18:18:36 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1 = s1;
	const unsigned char	*src2 = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
		{
			return (src1[i] - src2[i]);
		}
		i++;
	}
	return (0);
}
