/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:58:57 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/10 14:40:16 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
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
    return (i);
}