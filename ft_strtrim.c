/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:59:43 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 12:24:43 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_is(char c, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return(1);
        i++;
    }
    return (0);
}

void ft_movstart(int *start, char const *s1, char const *set)
{
    while (ft_is(s1[*start], set) == 1)
        *start+= 1;
}

void ft_movend(int *end, char const *s1, char const *set)
{
       while (ft_is(s1[*end], set) == 1)
        *end-= 1;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *f;
    
    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    ft_movstart(&start, s1, set);
    ft_movend(&end, s1, set);
    f = malloc(sizeof(char) * ((end - start) + 1));
    if (!f)
        return(NULL);
    while (start < end)
    {
        f[i] = s1[start];
        i++;
        start++;
    }
    f[i] = 0;
    return (f);
}