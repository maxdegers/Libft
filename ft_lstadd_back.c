/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:23:30 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/11 13:08:37 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pt;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	pt = *lst;
	while (pt->next != NULL)
	{
		pt = pt->next;
	}
	pt->next = new;
}
