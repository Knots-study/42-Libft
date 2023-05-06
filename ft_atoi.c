/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:22:35 by knottey           #+#    #+#             */
/*   Updated: 2023/05/07 00:41:48 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int	sign;
	int	ans;

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

// int main(int argc, char *argv[])
// {
// 	if (argc != 2){
// 		return (0);
// 	}
// 	int ans = ft_atoi(argv[1]);
// 	printf("%d\n", ans);
// }
