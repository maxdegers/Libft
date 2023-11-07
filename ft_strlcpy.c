/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:50:39 by mbrousse          #+#    #+#             */
/*   Updated: 2023/09/19 08:38:28 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char    s2[] = "defghijkl";
	char	s3[] = "abc";
	printf("%d \n", ft_strlcpy(s3,s2,0));
	printf("%s \n",s3);
	return 0;
}
*/
