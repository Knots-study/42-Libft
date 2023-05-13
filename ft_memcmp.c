/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 06:59:11 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 06:59:11 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void S*s2, size_t n)
{
	size_t			idx;
	unsigned char	*us1;
	unsigned char	*us2;

	idx = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (idx < n)
	{
		if (us1[idx] != us2[idx])
			return (us1[idx] - us2[idx]);
		idx++;
	}
	return (0);
}
