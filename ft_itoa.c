/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:11:38 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 16:28:14 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_recc(int nb,int *cont)
{
	if (nb < 0)
	{
		*cont += 1;
		ft_recc(nb * -1, cont);
	}
	else if (nb >= 10)
	{
		ft_recc(nb / 10, cont);
		ft_recc(nb % 10, cont);
	}
	else
	{
		*cont += 1;
	}
}

void ft_rec(int nb, char *str, int *i)
{
	if (nb < 0)
	{
		str[*i] = '-';
		nb = nb * -1;
        *i += 1;
	}
	else if (nb >= 10)
	{
		ft_rec(nb / 10, str, i);
		ft_rec(nb % 10, str, i);
	}
	else
	{
		str[*i] = nb + '0';
        *i += 1;
    }
}

char *ft_itoa(int n)
{
    char *str;
    int cont;
    
    cont = 1;
    ft_recc(n, &cont);
    str = malloc(sizeof(char) * cont + 1);
    if (!str)
        return (NULL);
    cont = 0;
    ft_rec(n, str, &cont);
    str[cont] = 0;
    return (str);
}
