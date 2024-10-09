/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:20:52 by elallema          #+#    #+#             */
/*   Updated: 2023/03/18 17:31:17 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	if (!dest)
		return (NULL);
	if (!src)
		return (dest);
	dst_tmp = (unsigned char *)dest;
	src_tmp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(dst_tmp + i) = *(src_tmp + i);
		i++;
	}
	return (dst_tmp);
}
