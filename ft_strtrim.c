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
#include <stdio.h>

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
	int		first_idx;
	int		last_idx;

	if (s1 == NULL || set == NULL)
		return (NULL);
	first_idx = 0;
	while (check_char_in_charset(s1[first_idx], set))
		first_idx++;
	last_idx = ft_strlen(s1) - 1;
	while (check_char_in_charset(s1[last_idx], set))
		last_idx--;
	trim_str = ft_substr(s1, first_idx, last_idx - first_idx + 1);
	return (trim_str);
}
//strchr and strrchr is useful, best to use;
