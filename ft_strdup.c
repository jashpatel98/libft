/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:58:40 by japatel           #+#    #+#             */
/*   Updated: 2023/10/21 01:53:54 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*duplicate;
	int		i;

	length = 0;
	while (s1[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= length)
	{
		duplicate[i] = s1[i];
		i++;
	}
	return (duplicate);
}
