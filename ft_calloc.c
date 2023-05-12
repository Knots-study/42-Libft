/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:06:59 by knottey           #+#    #+#             */
/*   Updated: 2023/05/12 16:09:01 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*memory;

	memory = malloc(sizeof(size) * num);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, num * size);
	return (memory);
}
