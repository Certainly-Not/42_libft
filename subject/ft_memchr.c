/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:20:20 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:48:46 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int chr, size_t n)
{
	size_t	i;

	if (!(const unsigned long *)src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == (char)chr)
			return ((void *)((char *)src + i));
		++i;
	}
	return (NULL);
}
