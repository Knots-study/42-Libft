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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (us1[i] == us2[i] && i < n)
		i++;
	return (us1[i] - us2[i]);
}
