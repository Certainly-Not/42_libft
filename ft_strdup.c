/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:22:27 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:39:51 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	i;

	i = ft_strlen(src);
	cpy = malloc(sizeof(char) * (i + 1));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, src, i + 1);
	return (cpy);
}
