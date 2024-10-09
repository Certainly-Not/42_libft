/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:20:57 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:35:10 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	while (n--)
	{
		((unsigned char *)dest)[n] = ((const char *)src)[n];
	}
	return (dest);
}
