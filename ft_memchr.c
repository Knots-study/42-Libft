/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:58:48 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 06:58:48 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*str;
	unsigned char	uc;

	idx = 0;
	str = (unsigned char *)s;
	uc = (unsigned char)c;
	while (idx < n)
	{
		if (str[idx] == uc)
			return ((void *)&str[idx]);
		idx++;
	}
	return (NULL);
}
