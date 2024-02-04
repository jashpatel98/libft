/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:57:26 by japatel           #+#    #+#             */
/*   Updated: 2023/10/23 18:38:47 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	char	*hay;

	hay = (char *)haystack;
	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || hay == needle)
		return (hay);
	while (hay[i] != '\0' && i + needle_len <= len)
	{
		if (ft_strncmp(&hay[i], needle, needle_len) == 0)
			return (&hay[i]);
		i++;
	}
	return (NULL);
}
