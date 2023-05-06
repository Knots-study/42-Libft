/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:32:11 by knottey           #+#    #+#             */
/*   Updated: 2023/05/07 00:40:50 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	check_char_in_charset(char c, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx] != '\0')
	{
		if (c == charset[idx])
		{
			return (1);
		}
		idx++;
	}
	return (0);
}

int	split_and_count_words(char *str, char *charset)
{
	int	idx;
	int	count;
	int	word_count_flag;

	idx = 0;
	count = 0;
	word_count_flag = 0;
	while (str[idx] != '\0')
	{
		if (!check_char_in_charset(str[idx], charset))
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

int	word_find(char **str, char *charset)
{
	int	count;

	count = 0;
	while (**str != '\0' && check_char_in_charset(**str, charset))
		(*str)++;
	while (**str != '\0' && !check_char_in_charset(**str, charset))
	{
		count++;
		(*str)++;
	}
	return (count);
}

void	copy_str(char *dest, char **src, int word_length)
{
	int	count;

	count = 0;
	while (**src != '\0' && count < word_length)
	{
		*dest = **src;
		dest++;
		(*src)++;
		count++;
	}
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		count_words;
	int		word_length;
	int		i;

	count_words = split_and_count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < count_words)
	{
		word_length = word_find(&str, charset);
		result[i] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (result[i] == NULL)
			return (NULL);
		str -= word_length;
		copy_str(result[i], &str, word_length);
		i++;
	}
	result[i] = 0;
	return (result);
}

// int main(void)
// {
//     char *str = "///the,:quick,:/:brown,fox,jumps,over,the,lazy,dog///";
//     char *charset = ",:/";
//     char **words = ft_split(str, charset);

//     if (!words)
//     {
//         printf("Error: memory allocation failed.\n");
//         return (1);
//     }

//     for (int i = 0; words[i]; i++)
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//     }
//     free(words);

//     return (0);
// }
