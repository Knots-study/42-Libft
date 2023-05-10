/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:06:54 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:06:54 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strncat(char *dst, const char *src, size_t size)
{
	size_t	dst_idx;
	size_t	src_idx;
	size_t	dst_length;

	dst_idx = 0;
	src_idx = 0;
	dst_length = ft_strlen(dst);
	while (dst[dst_idx] != '\0')
		dst_idx++;
	while (src[src_idx] != '\0' && dst_idx < size - dst_length - 1)
	{
		dst[dst_idx] = src[src_idx];
		src_idx++;
		dst_idx++;
	}
	dst[dst_idx] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize <= dst_length)
		return (src_length + dstsize);
	ft_strncat(dst, src, dstsize);
	return (dst_length + src_length);
}
