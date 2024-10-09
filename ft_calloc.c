/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:12:00 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:38:55 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elemCount, size_t elemSize)
{
	void	*ptr;

	if (elemCount && (((elemCount * elemSize) / elemCount) != elemSize))
		return (NULL);
	ptr = malloc(elemCount * elemSize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elemCount * elemSize);
	return (ptr);
}
