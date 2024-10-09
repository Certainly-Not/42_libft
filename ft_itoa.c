/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:14:53 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:51:31 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_n_size(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	i;

	i = get_n_size(n);
	nbr = malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (NULL);
	nbr[i--] = 0;
	if (n == 0)
		nbr[0] = '0';
	else if (n < 0)
		nbr[0] = '-';
	while (n)
	{
		if (n > 0)
			nbr[i--] = (n % 10) + '0';
		else
			nbr[i--] = ((n % 10) * -1) + '0';
		n /= 10;
	}
	return (nbr);
}
