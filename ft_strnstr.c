/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:23:46 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:14:26 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(substr);
	if (len == 0)
		return ((char *)str);
	if (size == 0)
		return (0);
	i = 0;
	while (str[i] && i <= (size - len))
	{
		if (str[i] == substr[0])
		{
			if (ft_strncmp(str + i, substr, len) == 0)
				return ((char *)str + i);
		}
		++i;
	}
	return (NULL);
}
