/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:34:32 by knottey           #+#    #+#             */
/*   Updated: 2023/05/02 21:04:27 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	length;

	length = 0;
	if (n < 0)
		length++;
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		idx;
	int		elem_length;

	idx = 0;
	elem_length = ft_intlen(n);
	ans = (char *)malloc(sizeof(char) * (elem_length + 1));
	if (ans == NULL)
		return (NULL);
	ans[elem_length] = '\0';
	idx = elem_length - 1;
	while (n > 0)
	{
		ans[idx] = n % 10 + '0';
		idx--;
	}
	if (n < 0)
		ans[idx] = '-';
	return (ans);
}
