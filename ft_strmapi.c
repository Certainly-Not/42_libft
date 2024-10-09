/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:23:32 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:35:59 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_dup;
	size_t	i;

	if (!s)
		return (NULL);
	str_dup = ft_strdup(s);
	if (str_dup)
	{	
		i = 0;
		while (s[i])
		{
			str_dup[i] = (*f)(i, s[i]);
			i++;
		}
	}	
	return (str_dup);
}
