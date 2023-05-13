/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:09:32 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:09:32 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_char_in_charset(char c, const char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx] != '\0')
	{
		if (c == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	int		sum_set;
	int		idx;

	if (s1 == NULL || set == NULL)
		return (NULL);
	sum_set = 0;
	idx = 0;
	while (s1[idx] != '\0')
	{
		if (check_char_in_charset(s1[idx], set))
			sum_set++;
		idx++;
	}
	trim_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - sum_set + 1));
	if (trim_str == NULL)
		return (NULL);
	idx = 0;
	while (s1[idx] != '\0')
	{
		trim_str[idx] = s1[idx];
		idx++;
	}
	trim_str[idx] = '\0';
	return (trim_str);
}
