/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:12:14 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:16:03 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int chr)
{
	if (chr >= 48 && chr <= 57)
		return (1);
	else if ((chr >= 65 && chr <= 90) || (chr >= 97 && chr <= 122))
		return (1);
	return (0);
}
