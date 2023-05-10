/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:05:03 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:05:03 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			idx;
	size_t			length;
	unsigned char	uc;

	uc = (unsigned char)c;
	idx = 0;
	length = ft_strlen(s) + 1;
	while (idx < length)
	{
		if (s[idx] == uc)
			return ((char *)(s + idx));
		idx++;
	}
	return (NULL);
}
