/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:48:59 by knottey           #+#    #+#             */
/*   Updated: 2023/05/10 23:10:46 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if ('a' <= uc && uc <= 'z')
		return (uc - ('a' - 'A'));
	return (uc);
}
