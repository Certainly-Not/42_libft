/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elallema <elallema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:22:15 by elallema          #+#    #+#             */
/*   Updated: 2022/12/04 12:47:17 by elallema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			j++;
		i++;
	}
	return (j);
}

static char	*get_str(char const *s, char c, size_t start)
{
	size_t	i;

	i = start;
	while (s[i] != c && s[i] != 0)
		i++;
	return (ft_substr(s, start, i - start));
}

static int	fill_table(char const *s, char c, char **table)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str = get_str(s, c, i);
			if (!str)
				return (j);
			else
			{
				table[j] = str;
				i += ft_strlen(str);
				j++;
			}
		}
		else
			i++;
	}
	return (-1);
}

static void	free_table(char **table, int j)
{
	while (j)
	{
		free(table[j - 1]);
		j--;
	}
	free(table);
}

char	**ft_split(char const *s, char c)
{
	size_t	tab_size;
	char	**res;
	int		check;

	if (!s)
		return (NULL);
	tab_size = count_strs(s, c);
	res = malloc(sizeof(char *) * (tab_size + 1));
	if (!res)
		return (NULL);
	res[tab_size] = NULL;
	check = fill_table(s, c, res);
	if (check != -1)
		return (free_table(res, check), NULL);
	return (res);
}
