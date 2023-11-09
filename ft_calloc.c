/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:15:08 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 15:14:03 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    
    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
    {
        return (NULL);
    }
    ft_bzero(ptr, nmemb);
    return (ptr);
}