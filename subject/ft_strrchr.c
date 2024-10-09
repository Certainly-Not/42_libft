/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:23:51 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:27:13 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	if (chr == 0)
		return ((char *)(str + ft_strlen(str)));
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)chr)
		{
			return ((char *)(str + i));
		}
		--i;
	}
	return (NULL);
}
