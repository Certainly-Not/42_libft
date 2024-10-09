/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:22:22 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:52:05 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	size_t	i;

	if (chr == 0)
		return ((char *)(str + ft_strlen(str)));
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)chr)
		{
			return ((char *)(str + i));
		}
		++i;
	}
	return (NULL);
}
