/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:10:07 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:10:07 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			idx;
	unsigned char	uc;

	uc = (unsigned char)c;
	idx = ft_strlen(s) + 1;
	while (idx > 0)
	{
		idx--;
		if (s[idx] == uc)
			return ((char *)(s + idx));
	}
	return (NULL);
}
