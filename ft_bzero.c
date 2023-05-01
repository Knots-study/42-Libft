/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:10:01 by knottey           #+#    #+#             */
/*   Updated: 2023/05/01 12:36:01 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	int				length;
	unsigned char	*dest;

	length = 0;
	dest = (unsigned char *)s;
	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
}
