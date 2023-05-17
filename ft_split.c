/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:32:11 by knottey           #+#    #+#             */
/*   Updated: 2023/05/17 16:33:57 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	split_count_words(const char *str, char c)
{
	int	idx;
	int	count;
	int	word_count_flag;

	idx = 0;
	count = 0;
	word_count_flag = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] != c)
		{
			if (word_count_flag == 0)
			{
				count++;
				word_count_flag = 1;
			}
		}
		else
			word_count_flag = 0;
		idx++;
	}
	return (count);
}

int	word_strlen(const char **str, char c)
{
	int	length;
	int	idx;

	length = 0;
	idx = 0;
	while (**str != '\0' && **str == c)
		(*str)++;
	while ((*str)[idx] != '\0' && !((*str)[idx] == c))
	{
		length++;
		idx++;
	}
	return (length);
}

void	free_all(char **memory, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(memory[i]);
		i++;
	}
	free(memory);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_length;
	int		count_words;
	int		i;

	if (s == NULL)
		return (NULL);
	count_words = split_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < count_words)
	{
		word_length = word_strlen(&s, c);
		result[i] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (result[i] == NULL)
		{
			free_all(result, i);
			return (NULL);
		}
		ft_strlcpy(result[i], s, word_length + 1);
		s += word_length;
		i++;
	}
	result[i] = NULL;
	return (result);
}
