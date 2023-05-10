/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 07:07:51 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 07:07:51 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] != '\0' && s2[idx] != '\0' && s1 == s2 && idx < n)
		idx++;
	return (s1[idx] - s2[idx]);
	//const char*にNULLは入れられないっぽい？
}
