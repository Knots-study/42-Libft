/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:22:35 by knottey           #+#    #+#             */
/*   Updated: 2023/05/17 16:59:40 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_space_sign(const char *str, const char **endptr)
{
	int	sign;

	while (ft_isspace(*str))
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

int	over_num(int sign)
{
	if (sign == 1)
		return ((int)(LONG_MAX));
	else
		return ((int)(LONG_MIN));
}

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	ans;

	sign = ft_space_sign(str, &str);
	ans = 0;
	while (ft_isdigit(*str))
	{
		if (ans > LONG_MAX / 10)
			return (over_num(sign));
		if (ans == LONG_MAX / 10 && (*str - '0') > LONG_MAX % 10)
			return (over_num(sign));
		ans *= 10;
		ans += *str - '0';
		str++;
	}
	return ((int)(ans * sign));
}
