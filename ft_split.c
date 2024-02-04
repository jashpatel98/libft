/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japatel <japatel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:58:53 by japatel           #+#    #+#             */
/*   Updated: 2023/10/26 13:58:50 by japatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(i + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	split_string(char const *s, char c, char **result)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			*result = copy_word(s, c);
			if (*result == NULL)
			{
				return (-1);
			}
			break ;
		}
		i++;
		if (s[i] == '\0')
		{
			*result = copy_word(s, c);
			if (*result == NULL)
			{
				return (-1);
			}
		}
	}
	return (i + 1);
}

static char	**split_loop(char const *s, char c, char **result,
		int num_words)
{
	int	i;
	int	pos;
	int	ret;

	i = 0;
	pos = 0;
	while (i < num_words)
	{
		while (s[pos] == c)
			pos++;
		ret = split_string(s + pos, c, &result[i]);
		if (ret == -1)
		{
			while (i >= 0)
			{
				free(result[i]);
				i--;
			}
			free(result);
			return (NULL);
		}
		pos += ret;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**result;
	int		i;
	int		pos;

	i = 0;
	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	pos = 0;
	result = split_loop(s, c, result, num_words);
	if (result == NULL)
		return (NULL);
	result[num_words] = NULL;
	return (result);
}
