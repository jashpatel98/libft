/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:57:36 by japatel           #+#    #+#             */
/*   Updated: 2023/10/21 02:23:37 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_word;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	new_word = (char *)malloc(i + 1);
	if (new_word == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		new_word[i] = f(i, s[i]);
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}
