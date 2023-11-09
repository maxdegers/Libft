/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:41:54 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 10:58:11 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    int id;
    char *str;
    
    str = malloc(sizeof(char)*len + 1);
    if (!str)
    {
        return (NULL);
    }
    while (i < start)
        i++;
    id = 0;
    while (i < len)
    {
        str[id] = s[i];
        i++;
        id++;
    }
    return (str);
}