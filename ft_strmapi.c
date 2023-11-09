/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:58:44 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 17:10:00 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char	*tab;
	int		i;

	tab = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!tab)
		return (0);
	i = 0;
	while (s[i])
	{
		tab[i] = f(i,s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}