/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:34:49 by mbrousse          #+#    #+#             */
/*   Updated: 2023/09/19 08:52:15 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_s;
	unsigned int	i;
	unsigned int	length_dest;
	unsigned int	length_src;

	i_s = 0;
	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	i = length_dest;
	if (size == 0)
		return (length_src);
	while (src[i_s] && i < size - 1)
	{
		dest[i] = src[i_s];
		i++;
		i_s++;
	}
	dest[i] = '\0';
	if (size < length_dest)
		return (length_src + size);
	return (length_src + length_dest);
}
/* 
cc ft_strlcat.c -lbsd
*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "test my code";
	char dest[] = "i want to";
	printf("%i \n", ft_strlcat(dest, src, 1));
	printf("%s \n", dest);

	char src2[] = "test my code";
	char dest2[] = "i want to";
	printf("%i \n", strlcat(dest2, src2, 1));
	printf("%s \n", dest2);
}
*/
