/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:24:20 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:32:32 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char s, char const *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	stop;
	char	*res;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	i = 0;
	while (is_set(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1)- 1;
	while (is_set(s1[i], set))
		i--;
	stop = i + 1;
	res = ft_substr(s1, start, stop - start);
	return (res);
}
