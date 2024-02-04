/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:57:21 by japatel           #+#    #+#             */
/*   Updated: 2023/10/23 18:59:24 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	character;
	char	*last_occurrence;
	int		i;

	i = 0;
	character = (char)c;
	last_occurrence = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == character)
		{
			last_occurrence = (char *)(s + i);
		}
		i++;
	}
	if (character == '\0')
		return ((char *)(s + i));
	return (last_occurrence);
}
