/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:03:35 by knottey           #+#    #+#             */
/*   Updated: 2023/05/07 01:36:44 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
		{
			j++;
		}
		if (j == ft_strlen(needle))
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

int main() {
    char haystack[] = "hello world";
    char needle[] = "wor";

    // 標準のstrstr関数と比較
    printf("Standard: %s\n", strstr(haystack, needle));
    printf("Custom: %s\n", ft_strstr(haystack, needle));

    // 異なるneedleを指定した場合
    char needle2[] = "foo";
    printf("Standard: %s\n", strstr(haystack, needle2));
    printf("Custom: %s\n", ft_strstr(haystack, needle2));

    // haystackの最後にneedleがある場合
    char haystack2[] = "hello worldwor";
    printf("Standard: %s\n", strstr(haystack2, needle));
    printf("Custom: %s\n", ft_strstr(haystack2, needle));

    return 0;
}
