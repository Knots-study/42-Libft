/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knottey <Twitter:@knottey>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:01:58 by knottey           #+#    #+#             */
/*   Updated: 2023/05/12 15:34:09 by knottey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join_word;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_word = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (join_word == NULL)
		return (NULL);
	ft_strlcpy(join_word, s1, s1_len + 1);
	ft_strlcpy(join_word + s1_len, s2, s2_len + 1);
	return (join_word);
}
