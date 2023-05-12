/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:00:27 by knottey           #+#    #+#             */
/*   Updated: 2023/05/11 23:05:02 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	idx;
	size_t	word_length;
	char	*str;

	idx = 0;
	word_length = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (word_length + 1));
	if (str == NULL)
		return (NULL);
	while (idx < word_length)
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	return (str);
}
