/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:22:35 by knottey           #+#    #+#             */
/*   Updated: 2023/05/15 07:21:12 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isspace(int c)
{
	c = (unsigned char)c;
	return (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r'	|| c == ' ');
}

int	ft_space_sign(const char *str, const char **endptr)
{
	int	sign;

	while (ft_isspace((unsigned char)*str))
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	*endptr = str;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	ans;

	sign = ft_space_sign(str, &str);
	ans = 0;
	while ('0' <= *str && *str <= '9')
	{
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	return (ans * sign);
}
