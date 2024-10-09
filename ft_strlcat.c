/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:23:12 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:21:22 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size == 0 || dst_size > size)
		return (size + src_size);
	i = 0;
	while (src[i] && (dst_size + i + 1) < size)
	{
		dest[dst_size + i] = src[i];
		++i;
	}
	dest[dst_size + i] = '\0';
	return (dst_size + src_size);
}
