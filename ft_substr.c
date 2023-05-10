/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:09:15 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:09:15 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	idx;
	char			*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	idx = 0;
	while (idx < len && s[start] != '\0')
	{
		substr[idx] = s[start];
		idx++;
		start++;
	}
	substr[idx] = '\0';
	return (substr);
}
