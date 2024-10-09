/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:21:20 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:19:29 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *dest, int value, size_t len )
{
	size_t			i;
	unsigned char	*d;

	if (!dest)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	while (i < len)
		d[i++] = (unsigned char)value;
	dest = (void *)d;
	return (dest);
}
