/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:18:55 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/10 18:21:30 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
        int i;
    t_list *pt;

    if (!lst)
        return (0);
    i = 1;
    pt = lst;
    while (pt->next)
    {
        pt = pt->next;
        i++;
    }
    return (pt);
}