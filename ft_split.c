/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:55:55 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 15:12:32 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

int	ft_charcmp(char c, char ca)
{
	if (c == ca)
		return (1);
	return (0);
}

void	ft_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_countword(char const *str, char ca)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (ft_charcmp(str[i], ca) == 0)
		{
			c++;
			i++;
			while (ft_charcmp(str[i], ca) == 0 && str[i])
				i++;
		}
		else
			i++;
	}
	return (c);
}

char **ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		size;
	char	**tab;

	j = 0;
	i = 0;
	size = ft_countword(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	while (s[i])
	{
		size = i;
		if (ft_charcmp(s[i], c) == 0)
		{
			while (s[size] && ft_charcmp(s[size], c) == 0)
				size++;
			tab[j] = malloc(sizeof(char) * (size - i + 1));
			ft_strncpy(tab[j++], &s[i], size - i);
			i = size;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
