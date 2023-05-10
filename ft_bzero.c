/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:10:01 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 21:29:49 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			length;
	unsigned char	*dest;

	length = 0;
	dest = (unsigned char *)s;
	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
}
