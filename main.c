/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:24 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 14:07:45 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//34 obligatoire --> 9 bonnusse
int main()
{
	printf("%d\n",ft_strncmp("test\200", "test\0", 6));
	printf("%d\n",strncmp("test\200", "test\0", 6));
	return 0;
    
}
