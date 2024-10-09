/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:16:13 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:18:16 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 65 && chr <= 90)
		return (chr + ('a' - 'A'));
	else
		return (chr);
}