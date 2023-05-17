/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:22:35 by knottey           #+#    #+#             */
/*   Updated: 2023/05/18 05:26:36 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static int	ft_space_sign(const char *str, const char **endptr)
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

static int	over_num(int sign)
{
	if (sign == 1)
		return ((int)(LONG_MAX));
	else
		return ((int)(LONG_MIN));
}

int	ft_atoi(const char *nptr)
{
	int				sign;
	long long int	ans;

	sign = ft_space_sign(nptr, &nptr);
	ans = 0;
	while (ft_isdigit(*nptr))
	{
		if (ans > LONG_MAX / 10)
			return (over_num(sign));
		if (ans == LONG_MAX / 10 && (*nptr - '0') > LONG_MAX % 10)
			return (over_num(sign));
		ans *= 10;
		ans += *nptr - '0';
		nptr++;
	}
	return ((int)(ans * sign));
}
