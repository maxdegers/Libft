/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:56:15 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/08 15:49:49 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *car;

    i = ft_strlen((char *)s);
    car = &((char *)s)[i];
    while (i >= 0)
    {
        if (c == s[i])
        {
            return (&((char *)s)[i]);
        }
        i--;
    }
    if (c == 0)
    {
        return (((char *)s) + i);
    }
    return (0);
}
