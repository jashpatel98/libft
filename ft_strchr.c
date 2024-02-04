/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:58:47 by japatel           #+#    #+#             */
/*   Updated: 2024/02/04 18:01:23 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	character;

	character = (char)c;
	if (!s)
		return (0);
	if (character == '\0')
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	return (0);
}
